typedef struct {
    PyObject_HEAD
    xmlSecDSigCtxPtr obj;
} xmlSecDSigCtxPtr_object;

typedef struct {
    PyObject_HEAD
    xmlSecDSigReferenceCtxPtr obj;
} xmlSecDSigReferenceCtxPtr_object;

#define xmlSecDSigCtxPtr_get(v) (((v) == Py_None) ? NULL : (((xmlSecDSigCtxPtr_object *)(PyObject_GetAttr(v, PyString_FromString("_o"))))->obj))
#define xmlSecDSigReferenceCtxPtr_get(v) (((v) == Py_None) ? NULL : (((xmlSecDSigReferenceCtxPtr_object *)(PyObject_GetAttr(v, PyString_FromString("_o"))))->obj))

PyObject *xmlsec_DSigCtxCreate(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigCtxDestroy(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigCtxInitialize(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigCtxFinalize(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigCtxSign(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigCtxVerify(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigCtxEnableReferenceTransform(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigCtxEnableSignatureTransform(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigCtxGetPreSignBuffer(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigCtxDebugDump(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigCtxDebugXmlDump(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigReferenceCtxCreate(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigReferenceCtxDestroy(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigReferenceCtxInitialize(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigReferenceCtxFinalize(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigReferenceCtxProcessNode(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigReferenceCtxGetPreDigestBuffer(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigReferenceCtxDebugDump(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigReferenceCtxDebugXmlDump(PyObject *self, PyObject *args);
PyObject *xmlsec_DSigReferenceCtxListId(PyObject *self, PyObject *args);

PyObject *xmldsig_set_signKey(PyObject *self, PyObject *args);
PyObject *xmldsig_set_enabledReferenceUris(PyObject *self, PyObject *args);
PyObject *xmldsig_get_status(PyObject *self, PyObject *args);
PyObject *xmldsig_get_keyInfoReadCtx(PyObject *self, PyObject *args);
PyObject *xmldsig_get_signedInfoReferences(PyObject *self, PyObject *args);
