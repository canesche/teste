// ========================================================================= //

// includes
#include "stdio.h"
#include "stdlib.h"
#include "time.h"
#include "string.h"
#include "limits.h"
#include "float.h"



#define JOTAI_NUM_RANDS_ 25

const unsigned rand_primes[JOTAI_NUM_RANDS_] = {179, 103, 479, 647, 229, 37, 271, 557, 263, 607, 18743, 50359, 21929, 48757, 98179, 12907, 52937, 64579, 49957, 52567, 507163, 149939, 412157, 680861, 757751};

int next_i() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_];
}

float next_f() {
  int counter = 0;
  return rand_primes[(++counter)%JOTAI_NUM_RANDS_] / 757751.0F;
} 


// Usage menu
void usage() {
    printf("%s", "Usage:\n\
    prog [ARGS]\n\
\nARGS:\n\
       0            int-bounds\n\
       1            big-arr\n\
       2            big-arr-10x\n\
\n\
");

}


// ------------------------------------------------------------------------- //

#define NULL ((void*)0)
typedef unsigned long size_t;  // Customize by platform.
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;  // Either arithmetic or pointer type.
/* By default, we understand bool (as a convenience). */
typedef int bool;
#define false 0
#define true 1

/* Forward declarations */

/* Type definitions */
typedef  int /*<<< orphan*/  xmlParserErrors ;
typedef  int /*<<< orphan*/  xmlNodePtr ;

/* Variables and functions */
 int /*<<< orphan*/  XML_ERR_INTERNAL_ERROR ; 

xmlParserErrors
xmlParseInNodeContext(xmlNodePtr node, const char *data, int datalen,
                      int options, xmlNodePtr *lst) {
#ifdef SAX2
    xmlParserCtxtPtr ctxt;
    xmlDocPtr doc = NULL;
    xmlNodePtr fake, cur;
    int nsnr = 0;

    xmlParserErrors ret = XML_ERR_OK;

    /*
     * check all input parameters, grab the document
     */
    if ((lst == NULL) || (node == NULL) || (data == NULL) || (datalen < 0))
        return(XML_ERR_INTERNAL_ERROR);
    switch (node->type) {
        case XML_ELEMENT_NODE:
        case XML_ATTRIBUTE_NODE:
        case XML_TEXT_NODE:
        case XML_CDATA_SECTION_NODE:
        case XML_ENTITY_REF_NODE:
        case XML_PI_NODE:
        case XML_COMMENT_NODE:
        case XML_DOCUMENT_NODE:
        case XML_HTML_DOCUMENT_NODE:
	    break;
	default:
	    return(XML_ERR_INTERNAL_ERROR);

    }
    while ((node != NULL) && (node->type != XML_ELEMENT_NODE) &&
           (node->type != XML_DOCUMENT_NODE) &&
	   (node->type != XML_HTML_DOCUMENT_NODE))
	node = node->parent;
    if (node == NULL)
	return(XML_ERR_INTERNAL_ERROR);
    if (node->type == XML_ELEMENT_NODE)
	doc = node->doc;
    else
        doc = (xmlDocPtr) node;
    if (doc == NULL)
	return(XML_ERR_INTERNAL_ERROR);

    /*
     * allocate a context and set-up everything not related to the
     * node position in the tree
     */
    if (doc->type == XML_DOCUMENT_NODE)
	ctxt = xmlCreateMemoryParserCtxt((char *) data, datalen);
#ifdef LIBXML_HTML_ENABLED
    else if (doc->type == XML_HTML_DOCUMENT_NODE) {
	ctxt = htmlCreateMemoryParserCtxt((char *) data, datalen);
        /*
         * When parsing in context, it makes no sense to add implied
         * elements like html/body/etc...
         */
        options |= HTML_PARSE_NOIMPLIED;
    }
#endif
    else
        return(XML_ERR_INTERNAL_ERROR);

    if (ctxt == NULL)
        return(XML_ERR_NO_MEMORY);

    /*
     * Use input doc's dict if present, else assure XML_PARSE_NODICT is set.
     * We need a dictionary for xmlDetectSAX2, so if there's no doc dict
     * we must wait until the last moment to free the original one.
     */
    if (doc->dict != NULL) {
        if (ctxt->dict != NULL)
	    xmlDictFree(ctxt->dict);
	ctxt->dict = doc->dict;
    } else
        options |= XML_PARSE_NODICT;

    if (doc->encoding != NULL) {
        xmlCharEncodingHandlerPtr hdlr;

        if (ctxt->encoding != NULL)
	    xmlFree((xmlChar *) ctxt->encoding);
        ctxt->encoding = xmlStrdup((const xmlChar *) doc->encoding);

        hdlr = xmlFindCharEncodingHandler((const char *) doc->encoding);
        if (hdlr != NULL) {
            xmlSwitchToEncoding(ctxt, hdlr);
	} else {
            return(XML_ERR_UNSUPPORTED_ENCODING);
        }
    }

    xmlCtxtUseOptionsInternal(ctxt, options, NULL);
    xmlDetectSAX2(ctxt);
    ctxt->myDoc = doc;
    /* parsing in context, i.e. as within existing content */
    ctxt->input_id = 2;
    ctxt->instate = XML_PARSER_CONTENT;

    fake = xmlNewComment(NULL);
    if (fake == NULL) {
        xmlFreeParserCtxt(ctxt);
	return(XML_ERR_NO_MEMORY);
    }
    xmlAddChild(node, fake);

    if (node->type == XML_ELEMENT_NODE) {
	nodePush(ctxt, node);
	/*
	 * initialize the SAX2 namespaces stack
	 */
	cur = node;
	while ((cur != NULL) && (cur->type == XML_ELEMENT_NODE)) {
	    xmlNsPtr ns = cur->nsDef;
	    const xmlChar *iprefix, *ihref;

	    while (ns != NULL) {
		if (ctxt->dict) {
		    iprefix = xmlDictLookup(ctxt->dict, ns->prefix, -1);
		    ihref = xmlDictLookup(ctxt->dict, ns->href, -1);
		} else {
		    iprefix = ns->prefix;
		    ihref = ns->href;
		}

	        if (xmlGetNamespace(ctxt, iprefix) == NULL) {
		    nsPush(ctxt, iprefix, ihref);
		    nsnr++;
		}
		ns = ns->next;
	    }
	    cur = cur->parent;
	}
    }

    if ((ctxt->validate) || (ctxt->replaceEntities != 0)) {
	/*
	 * ID/IDREF registration will be done in xmlValidateElement below
	 */
	ctxt->loadsubset |= XML_SKIP_IDS;
    }

#ifdef LIBXML_HTML_ENABLED
    if (doc->type == XML_HTML_DOCUMENT_NODE)
        __htmlParseContent(ctxt);
    else
#endif
	xmlParseContent(ctxt);

    nsPop(ctxt, nsnr);
    if ((RAW == '<') && (NXT(1) == '/')) {
	xmlFatalErr(ctxt, XML_ERR_NOT_WELL_BALANCED, NULL);
    } else if (RAW != 0) {
	xmlFatalErr(ctxt, XML_ERR_EXTRA_CONTENT, NULL);
    }
    if ((ctxt->node != NULL) && (ctxt->node != node)) {
	xmlFatalErr(ctxt, XML_ERR_NOT_WELL_BALANCED, NULL);
	ctxt->wellFormed = 0;
    }

    if (!ctxt->wellFormed) {
        if (ctxt->errNo == 0)
	    ret = XML_ERR_INTERNAL_ERROR;
	else
	    ret = (xmlParserErrors)ctxt->errNo;
    } else {
        ret = XML_ERR_OK;
    }

    /*
     * Return the newly created nodeset after unlinking it from
     * the pseudo sibling.
     */

    cur = fake->next;
    fake->next = NULL;
    node->last = fake;

    if (cur != NULL) {
	cur->prev = NULL;
    }

    *lst = cur;

    while (cur != NULL) {
	cur->parent = NULL;
	cur = cur->next;
    }

    xmlUnlinkNode(fake);
    xmlFreeNode(fake);


    if (ret != XML_ERR_OK) {
        xmlFreeNodeList(*lst);
	*lst = NULL;
    }

    if (doc->dict != NULL)
        ctxt->dict = NULL;
    xmlFreeParserCtxt(ctxt);

    return(ret);
#else /* !SAX2 */
    return(XML_ERR_INTERNAL_ERROR);
#endif
}


// ------------------------------------------------------------------------- //

int main(int argc, char *argv[]) {

    if (argc != 2) {
        usage();
        return 1;
    }

    int opt = atoi(argv[1]);
    switch(opt) {

    // int-bounds
    case 0:
    {
          int node = 100;
          int datalen = 100;
          int options = 100;
          int _len_data0 = 1;
          const char * data = (const char *) malloc(_len_data0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lst0 = 1;
          int * lst = (int *) malloc(_len_lst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lst0; _i0++) {
            lst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xmlParseInNodeContext(node,data,datalen,options,lst);
          printf("%d\n", benchRet); 
          free(data);
          free(lst);
        
        break;
    }
    // big-arr
    case 1:
    {
          int node = 255;
          int datalen = 255;
          int options = 255;
          int _len_data0 = 65025;
          const char * data = (const char *) malloc(_len_data0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lst0 = 65025;
          int * lst = (int *) malloc(_len_lst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lst0; _i0++) {
            lst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xmlParseInNodeContext(node,data,datalen,options,lst);
          printf("%d\n", benchRet); 
          free(data);
          free(lst);
        
        break;
    }
    // big-arr-10x
    case 2:
    {
          int node = 10;
          int datalen = 10;
          int options = 10;
          int _len_data0 = 100;
          const char * data = (const char *) malloc(_len_data0*sizeof(const char));
          for(int _i0 = 0; _i0 < _len_data0; _i0++) {
            data[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int _len_lst0 = 100;
          int * lst = (int *) malloc(_len_lst0*sizeof(int));
          for(int _i0 = 0; _i0 < _len_lst0; _i0++) {
            lst[_i0] = ((-2 * (next_i()%2)) + 1) * next_i();
          }
          int benchRet = xmlParseInNodeContext(node,data,datalen,options,lst);
          printf("%d\n", benchRet); 
          free(data);
          free(lst);
        
        break;
    }

    default:
        usage();
        break;

    }

    return 0;
}
