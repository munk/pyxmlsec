#ifndef __PYXMLSEC_WRAP_OBJS_H__
#define __PYXMLSEC_WRAP_OBJS_H__

#include <Python.h>

#include <stdio.h>

#include <libxml/tree.h>

#include <xmlsec/crypto.h>
#include <xmlsec/base64.h>
#include <xmlsec/buffer.h>
#include <xmlsec/keyinfo.h>
#include <xmlsec/keys.h>
#include <xmlsec/keysmngr.h>
#include <xmlsec/list.h>
#include <xmlsec/membuf.h>
#include <xmlsec/nodeset.h>
#include <xmlsec/parser.h>
#include <xmlsec/templates.h>
#include <xmlsec/transforms.h>
#include <xmlsec/xmldsig.h>
#include <xmlsec/xmlenc.h>
#include <xmlsec/xmlsec.h>
#include <xmlsec/xmltree.h>
#include <xmlsec/x509.h>

typedef struct {
    PyObject_HEAD
    xmlDocPtr obj;
} xmlDocPtr_object;

typedef struct {
    PyObject_HEAD
    xmlNodePtr obj;
} xmlNodePtr_object;

typedef struct {
    PyObject_HEAD
    xmlOutputBufferPtr obj;
} xmlOutputBufferPtr_object;

typedef struct {
    PyObject_HEAD
    xmlNodeSetPtr obj;
} xmlNodeSetPtr_object;

#define xmlDocPtr_get(v) (((v) == Py_None) ? NULL : (((xmlDocPtr_object *)(PyObject_GetAttr(v, PyString_FromString("_o"))))->obj))
#define xmlNodePtr_get(v) (((v) == Py_None) ? NULL : (((xmlNodePtr_object *)(PyObject_GetAttr(v, PyString_FromString("_o"))))->obj))
#define xmlOutputBufferPtr_get(v) (((v) == Py_None) ? NULL : (((xmlOutputBufferPtr_object *)(PyObject_GetAttr(v, PyString_FromString("_o"))))->obj))
#define xmlNodeSetPtr_get(v) (((v) == Py_None) ? NULL : (((xmlNodeSetPtr_object *)(PyObject_GetAttr(v, PyString_FromString("_o"))))->obj))

PyObject *xmlsec_error;

PyObject *wrap_int(int val);
PyObject *wrap_str(char *str);
PyObject *wrap_xmlDocPtr(xmlDocPtr doc);
PyObject *wrap_xmlNodePtr(xmlNodePtr node);
PyObject *wrap_xmlOutputBufferPtr(xmlOutputBufferPtr buf);
PyObject *wrap_xmlSecTransformCtxPtr(xmlSecTransformCtxPtr ctx);

#endif /* __PYXMLSEC_WRAP_OBJS_H__ */