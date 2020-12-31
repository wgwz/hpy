
/*
   DO NOT EDIT THIS FILE!

   This file is automatically generated by hpy.tools.autogen.debug.autogen_debug_ctx_def_h
   See also hpy.tools.autogen and hpy/tools/public_api.h

   Run this to regenerate:
       make autogen

*/


/*
The debug_ctx_* functions contain the actualy logic: they receive and
return handles of type DHPy.

The _adapter_debug_* helpers cast DHPy into HPy and viceversa, to get
functions those signature is compatible to what is declared in the
HPyContext. Note that they are no-op, since the internal repr of DHPy
and HPy is the same (but the first is seen as a pointer to DHPy_s the
second as a small struct containining an integer), but the C standard
forbids casting function pointers whose arguments have nominally
different types, so we need to write the adapters manually.
*/

DHPy debug_ctx_Module_Create(HPyContext ctx, HPyModuleDef *def);
HPy _adapter_debug_ctx_Module_Create(HPyContext ctx, HPyModuleDef *def)
{
    return _d2h(debug_ctx_Module_Create(ctx, def));
}

DHPy debug_ctx_Dup(HPyContext ctx, DHPy h);
HPy _adapter_debug_ctx_Dup(HPyContext ctx, HPy h)
{
    return _d2h(debug_ctx_Dup(ctx, _h2d(h)));
}

void debug_ctx_Close(HPyContext ctx, DHPy h);
void _adapter_debug_ctx_Close(HPyContext ctx, HPy h)
{
    debug_ctx_Close(ctx, _h2d(h));
}

DHPy debug_ctx_Long_FromLong(HPyContext ctx, long value);
HPy _adapter_debug_ctx_Long_FromLong(HPyContext ctx, long value)
{
    return _d2h(debug_ctx_Long_FromLong(ctx, value));
}

DHPy debug_ctx_Long_FromUnsignedLong(HPyContext ctx, unsigned long value);
HPy _adapter_debug_ctx_Long_FromUnsignedLong(HPyContext ctx, unsigned long value)
{
    return _d2h(debug_ctx_Long_FromUnsignedLong(ctx, value));
}

DHPy debug_ctx_Long_FromLongLong(HPyContext ctx, long long v);
HPy _adapter_debug_ctx_Long_FromLongLong(HPyContext ctx, long long v)
{
    return _d2h(debug_ctx_Long_FromLongLong(ctx, v));
}

DHPy debug_ctx_Long_FromUnsignedLongLong(HPyContext ctx, unsigned long long v);
HPy _adapter_debug_ctx_Long_FromUnsignedLongLong(HPyContext ctx, unsigned long long v)
{
    return _d2h(debug_ctx_Long_FromUnsignedLongLong(ctx, v));
}

DHPy debug_ctx_Long_FromSize_t(HPyContext ctx, size_t value);
HPy _adapter_debug_ctx_Long_FromSize_t(HPyContext ctx, size_t value)
{
    return _d2h(debug_ctx_Long_FromSize_t(ctx, value));
}

DHPy debug_ctx_Long_FromSsize_t(HPyContext ctx, HPy_ssize_t value);
HPy _adapter_debug_ctx_Long_FromSsize_t(HPyContext ctx, HPy_ssize_t value)
{
    return _d2h(debug_ctx_Long_FromSsize_t(ctx, value));
}

long debug_ctx_Long_AsLong(HPyContext ctx, DHPy h);
long _adapter_debug_ctx_Long_AsLong(HPyContext ctx, HPy h)
{
    return debug_ctx_Long_AsLong(ctx, _h2d(h));
}

unsigned long debug_ctx_Long_AsUnsignedLong(HPyContext ctx, DHPy h);
unsigned long _adapter_debug_ctx_Long_AsUnsignedLong(HPyContext ctx, HPy h)
{
    return debug_ctx_Long_AsUnsignedLong(ctx, _h2d(h));
}

unsigned long debug_ctx_Long_AsUnsignedLongMask(HPyContext ctx, DHPy h);
unsigned long _adapter_debug_ctx_Long_AsUnsignedLongMask(HPyContext ctx, HPy h)
{
    return debug_ctx_Long_AsUnsignedLongMask(ctx, _h2d(h));
}

long long debug_ctx_Long_AsLongLong(HPyContext ctx, DHPy h);
long long _adapter_debug_ctx_Long_AsLongLong(HPyContext ctx, HPy h)
{
    return debug_ctx_Long_AsLongLong(ctx, _h2d(h));
}

unsigned long long debug_ctx_Long_AsUnsignedLongLong(HPyContext ctx, DHPy h);
unsigned long long _adapter_debug_ctx_Long_AsUnsignedLongLong(HPyContext ctx, HPy h)
{
    return debug_ctx_Long_AsUnsignedLongLong(ctx, _h2d(h));
}

unsigned long long debug_ctx_Long_AsUnsignedLongLongMask(HPyContext ctx, DHPy h);
unsigned long long _adapter_debug_ctx_Long_AsUnsignedLongLongMask(HPyContext ctx, HPy h)
{
    return debug_ctx_Long_AsUnsignedLongLongMask(ctx, _h2d(h));
}

size_t debug_ctx_Long_AsSize_t(HPyContext ctx, DHPy h);
size_t _adapter_debug_ctx_Long_AsSize_t(HPyContext ctx, HPy h)
{
    return debug_ctx_Long_AsSize_t(ctx, _h2d(h));
}

HPy_ssize_t debug_ctx_Long_AsSsize_t(HPyContext ctx, DHPy h);
HPy_ssize_t _adapter_debug_ctx_Long_AsSsize_t(HPyContext ctx, HPy h)
{
    return debug_ctx_Long_AsSsize_t(ctx, _h2d(h));
}

DHPy debug_ctx_Float_FromDouble(HPyContext ctx, double v);
HPy _adapter_debug_ctx_Float_FromDouble(HPyContext ctx, double v)
{
    return _d2h(debug_ctx_Float_FromDouble(ctx, v));
}

double debug_ctx_Float_AsDouble(HPyContext ctx, DHPy h);
double _adapter_debug_ctx_Float_AsDouble(HPyContext ctx, HPy h)
{
    return debug_ctx_Float_AsDouble(ctx, _h2d(h));
}

HPy_ssize_t debug_ctx_Length(HPyContext ctx, DHPy h);
HPy_ssize_t _adapter_debug_ctx_Length(HPyContext ctx, HPy h)
{
    return debug_ctx_Length(ctx, _h2d(h));
}

int debug_ctx_Number_Check(HPyContext ctx, DHPy h);
int _adapter_debug_ctx_Number_Check(HPyContext ctx, HPy h)
{
    return debug_ctx_Number_Check(ctx, _h2d(h));
}

DHPy debug_ctx_Add(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_Add(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_Add(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_Subtract(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_Subtract(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_Subtract(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_Multiply(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_Multiply(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_Multiply(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_MatrixMultiply(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_MatrixMultiply(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_MatrixMultiply(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_FloorDivide(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_FloorDivide(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_FloorDivide(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_TrueDivide(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_TrueDivide(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_TrueDivide(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_Remainder(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_Remainder(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_Remainder(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_Divmod(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_Divmod(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_Divmod(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_Power(HPyContext ctx, DHPy h1, DHPy h2, DHPy h3);
HPy _adapter_debug_ctx_Power(HPyContext ctx, HPy h1, HPy h2, HPy h3)
{
    return _d2h(debug_ctx_Power(ctx, _h2d(h1), _h2d(h2), _h2d(h3)));
}

DHPy debug_ctx_Negative(HPyContext ctx, DHPy h1);
HPy _adapter_debug_ctx_Negative(HPyContext ctx, HPy h1)
{
    return _d2h(debug_ctx_Negative(ctx, _h2d(h1)));
}

DHPy debug_ctx_Positive(HPyContext ctx, DHPy h1);
HPy _adapter_debug_ctx_Positive(HPyContext ctx, HPy h1)
{
    return _d2h(debug_ctx_Positive(ctx, _h2d(h1)));
}

DHPy debug_ctx_Absolute(HPyContext ctx, DHPy h1);
HPy _adapter_debug_ctx_Absolute(HPyContext ctx, HPy h1)
{
    return _d2h(debug_ctx_Absolute(ctx, _h2d(h1)));
}

DHPy debug_ctx_Invert(HPyContext ctx, DHPy h1);
HPy _adapter_debug_ctx_Invert(HPyContext ctx, HPy h1)
{
    return _d2h(debug_ctx_Invert(ctx, _h2d(h1)));
}

DHPy debug_ctx_Lshift(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_Lshift(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_Lshift(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_Rshift(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_Rshift(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_Rshift(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_And(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_And(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_And(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_Xor(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_Xor(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_Xor(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_Or(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_Or(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_Or(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_Index(HPyContext ctx, DHPy h1);
HPy _adapter_debug_ctx_Index(HPyContext ctx, HPy h1)
{
    return _d2h(debug_ctx_Index(ctx, _h2d(h1)));
}

DHPy debug_ctx_Long(HPyContext ctx, DHPy h1);
HPy _adapter_debug_ctx_Long(HPyContext ctx, HPy h1)
{
    return _d2h(debug_ctx_Long(ctx, _h2d(h1)));
}

DHPy debug_ctx_Float(HPyContext ctx, DHPy h1);
HPy _adapter_debug_ctx_Float(HPyContext ctx, HPy h1)
{
    return _d2h(debug_ctx_Float(ctx, _h2d(h1)));
}

DHPy debug_ctx_InPlaceAdd(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_InPlaceAdd(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_InPlaceAdd(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_InPlaceSubtract(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_InPlaceSubtract(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_InPlaceSubtract(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_InPlaceMultiply(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_InPlaceMultiply(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_InPlaceMultiply(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_InPlaceMatrixMultiply(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_InPlaceMatrixMultiply(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_InPlaceMatrixMultiply(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_InPlaceFloorDivide(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_InPlaceFloorDivide(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_InPlaceFloorDivide(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_InPlaceTrueDivide(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_InPlaceTrueDivide(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_InPlaceTrueDivide(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_InPlaceRemainder(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_InPlaceRemainder(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_InPlaceRemainder(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_InPlacePower(HPyContext ctx, DHPy h1, DHPy h2, DHPy h3);
HPy _adapter_debug_ctx_InPlacePower(HPyContext ctx, HPy h1, HPy h2, HPy h3)
{
    return _d2h(debug_ctx_InPlacePower(ctx, _h2d(h1), _h2d(h2), _h2d(h3)));
}

DHPy debug_ctx_InPlaceLshift(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_InPlaceLshift(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_InPlaceLshift(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_InPlaceRshift(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_InPlaceRshift(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_InPlaceRshift(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_InPlaceAnd(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_InPlaceAnd(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_InPlaceAnd(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_InPlaceXor(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_InPlaceXor(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_InPlaceXor(ctx, _h2d(h1), _h2d(h2)));
}

DHPy debug_ctx_InPlaceOr(HPyContext ctx, DHPy h1, DHPy h2);
HPy _adapter_debug_ctx_InPlaceOr(HPyContext ctx, HPy h1, HPy h2)
{
    return _d2h(debug_ctx_InPlaceOr(ctx, _h2d(h1), _h2d(h2)));
}

void debug_ctx_Err_SetString(HPyContext ctx, DHPy h_type, const char *message);
void _adapter_debug_ctx_Err_SetString(HPyContext ctx, HPy h_type, const char *message)
{
    debug_ctx_Err_SetString(ctx, _h2d(h_type), message);
}

void debug_ctx_Err_SetObject(HPyContext ctx, DHPy h_type, DHPy h_value);
void _adapter_debug_ctx_Err_SetObject(HPyContext ctx, HPy h_type, HPy h_value)
{
    debug_ctx_Err_SetObject(ctx, _h2d(h_type), _h2d(h_value));
}

int debug_ctx_Err_Occurred(HPyContext ctx);
int _adapter_debug_ctx_Err_Occurred(HPyContext ctx)
{
    return debug_ctx_Err_Occurred(ctx);
}

DHPy debug_ctx_Err_NoMemory(HPyContext ctx);
HPy _adapter_debug_ctx_Err_NoMemory(HPyContext ctx)
{
    return _d2h(debug_ctx_Err_NoMemory(ctx));
}

void debug_ctx_Err_Clear(HPyContext ctx);
void _adapter_debug_ctx_Err_Clear(HPyContext ctx)
{
    debug_ctx_Err_Clear(ctx);
}

int debug_ctx_IsTrue(HPyContext ctx, DHPy h);
int _adapter_debug_ctx_IsTrue(HPyContext ctx, HPy h)
{
    return debug_ctx_IsTrue(ctx, _h2d(h));
}

DHPy debug_ctx_Type_FromSpec(HPyContext ctx, HPyType_Spec *spec, HPyType_SpecParam *params);
HPy _adapter_debug_ctx_Type_FromSpec(HPyContext ctx, HPyType_Spec *spec, HPyType_SpecParam *params)
{
    return _d2h(debug_ctx_Type_FromSpec(ctx, spec, params));
}

DHPy debug_ctx_Type_GenericNew(HPyContext ctx, DHPy type, DHPy *args, HPy_ssize_t nargs, DHPy kw);
HPy _adapter_debug_ctx_Type_GenericNew(HPyContext ctx, HPy type, HPy *args, HPy_ssize_t nargs, HPy kw)
{
    return _d2h(debug_ctx_Type_GenericNew(ctx, _h2d(type), (DHPy *)args, nargs, _h2d(kw)));
}

DHPy debug_ctx_GetAttr(HPyContext ctx, DHPy obj, DHPy name);
HPy _adapter_debug_ctx_GetAttr(HPyContext ctx, HPy obj, HPy name)
{
    return _d2h(debug_ctx_GetAttr(ctx, _h2d(obj), _h2d(name)));
}

DHPy debug_ctx_GetAttr_s(HPyContext ctx, DHPy obj, const char *name);
HPy _adapter_debug_ctx_GetAttr_s(HPyContext ctx, HPy obj, const char *name)
{
    return _d2h(debug_ctx_GetAttr_s(ctx, _h2d(obj), name));
}

int debug_ctx_HasAttr(HPyContext ctx, DHPy obj, DHPy name);
int _adapter_debug_ctx_HasAttr(HPyContext ctx, HPy obj, HPy name)
{
    return debug_ctx_HasAttr(ctx, _h2d(obj), _h2d(name));
}

int debug_ctx_HasAttr_s(HPyContext ctx, DHPy obj, const char *name);
int _adapter_debug_ctx_HasAttr_s(HPyContext ctx, HPy obj, const char *name)
{
    return debug_ctx_HasAttr_s(ctx, _h2d(obj), name);
}

int debug_ctx_SetAttr(HPyContext ctx, DHPy obj, DHPy name, DHPy value);
int _adapter_debug_ctx_SetAttr(HPyContext ctx, HPy obj, HPy name, HPy value)
{
    return debug_ctx_SetAttr(ctx, _h2d(obj), _h2d(name), _h2d(value));
}

int debug_ctx_SetAttr_s(HPyContext ctx, DHPy obj, const char *name, DHPy value);
int _adapter_debug_ctx_SetAttr_s(HPyContext ctx, HPy obj, const char *name, HPy value)
{
    return debug_ctx_SetAttr_s(ctx, _h2d(obj), name, _h2d(value));
}

DHPy debug_ctx_GetItem(HPyContext ctx, DHPy obj, DHPy key);
HPy _adapter_debug_ctx_GetItem(HPyContext ctx, HPy obj, HPy key)
{
    return _d2h(debug_ctx_GetItem(ctx, _h2d(obj), _h2d(key)));
}

DHPy debug_ctx_GetItem_i(HPyContext ctx, DHPy obj, HPy_ssize_t idx);
HPy _adapter_debug_ctx_GetItem_i(HPyContext ctx, HPy obj, HPy_ssize_t idx)
{
    return _d2h(debug_ctx_GetItem_i(ctx, _h2d(obj), idx));
}

DHPy debug_ctx_GetItem_s(HPyContext ctx, DHPy obj, const char *key);
HPy _adapter_debug_ctx_GetItem_s(HPyContext ctx, HPy obj, const char *key)
{
    return _d2h(debug_ctx_GetItem_s(ctx, _h2d(obj), key));
}

int debug_ctx_SetItem(HPyContext ctx, DHPy obj, DHPy key, DHPy value);
int _adapter_debug_ctx_SetItem(HPyContext ctx, HPy obj, HPy key, HPy value)
{
    return debug_ctx_SetItem(ctx, _h2d(obj), _h2d(key), _h2d(value));
}

int debug_ctx_SetItem_i(HPyContext ctx, DHPy obj, HPy_ssize_t idx, DHPy value);
int _adapter_debug_ctx_SetItem_i(HPyContext ctx, HPy obj, HPy_ssize_t idx, HPy value)
{
    return debug_ctx_SetItem_i(ctx, _h2d(obj), idx, _h2d(value));
}

int debug_ctx_SetItem_s(HPyContext ctx, DHPy obj, const char *key, DHPy value);
int _adapter_debug_ctx_SetItem_s(HPyContext ctx, HPy obj, const char *key, HPy value)
{
    return debug_ctx_SetItem_s(ctx, _h2d(obj), key, _h2d(value));
}

void *debug_ctx_Cast(HPyContext ctx, DHPy h);
void *_adapter_debug_ctx_Cast(HPyContext ctx, HPy h)
{
    return debug_ctx_Cast(ctx, _h2d(h));
}

DHPy debug_ctx_New(HPyContext ctx, DHPy h_type, void **data);
HPy _adapter_debug_ctx_New(HPyContext ctx, HPy h_type, void **data)
{
    return _d2h(debug_ctx_New(ctx, _h2d(h_type), data));
}

DHPy debug_ctx_Repr(HPyContext ctx, DHPy obj);
HPy _adapter_debug_ctx_Repr(HPyContext ctx, HPy obj)
{
    return _d2h(debug_ctx_Repr(ctx, _h2d(obj)));
}

DHPy debug_ctx_Str(HPyContext ctx, DHPy obj);
HPy _adapter_debug_ctx_Str(HPyContext ctx, HPy obj)
{
    return _d2h(debug_ctx_Str(ctx, _h2d(obj)));
}

DHPy debug_ctx_ASCII(HPyContext ctx, DHPy obj);
HPy _adapter_debug_ctx_ASCII(HPyContext ctx, HPy obj)
{
    return _d2h(debug_ctx_ASCII(ctx, _h2d(obj)));
}

DHPy debug_ctx_Bytes(HPyContext ctx, DHPy obj);
HPy _adapter_debug_ctx_Bytes(HPyContext ctx, HPy obj)
{
    return _d2h(debug_ctx_Bytes(ctx, _h2d(obj)));
}

DHPy debug_ctx_RichCompare(HPyContext ctx, DHPy v, DHPy w, int op);
HPy _adapter_debug_ctx_RichCompare(HPyContext ctx, HPy v, HPy w, int op)
{
    return _d2h(debug_ctx_RichCompare(ctx, _h2d(v), _h2d(w), op));
}

int debug_ctx_RichCompareBool(HPyContext ctx, DHPy v, DHPy w, int op);
int _adapter_debug_ctx_RichCompareBool(HPyContext ctx, HPy v, HPy w, int op)
{
    return debug_ctx_RichCompareBool(ctx, _h2d(v), _h2d(w), op);
}

HPy_hash_t debug_ctx_Hash(HPyContext ctx, DHPy obj);
HPy_hash_t _adapter_debug_ctx_Hash(HPyContext ctx, HPy obj)
{
    return debug_ctx_Hash(ctx, _h2d(obj));
}

int debug_ctx_Bytes_Check(HPyContext ctx, DHPy h);
int _adapter_debug_ctx_Bytes_Check(HPyContext ctx, HPy h)
{
    return debug_ctx_Bytes_Check(ctx, _h2d(h));
}

HPy_ssize_t debug_ctx_Bytes_Size(HPyContext ctx, DHPy h);
HPy_ssize_t _adapter_debug_ctx_Bytes_Size(HPyContext ctx, HPy h)
{
    return debug_ctx_Bytes_Size(ctx, _h2d(h));
}

HPy_ssize_t debug_ctx_Bytes_GET_SIZE(HPyContext ctx, DHPy h);
HPy_ssize_t _adapter_debug_ctx_Bytes_GET_SIZE(HPyContext ctx, HPy h)
{
    return debug_ctx_Bytes_GET_SIZE(ctx, _h2d(h));
}

char *debug_ctx_Bytes_AsString(HPyContext ctx, DHPy h);
char *_adapter_debug_ctx_Bytes_AsString(HPyContext ctx, HPy h)
{
    return debug_ctx_Bytes_AsString(ctx, _h2d(h));
}

char *debug_ctx_Bytes_AS_STRING(HPyContext ctx, DHPy h);
char *_adapter_debug_ctx_Bytes_AS_STRING(HPyContext ctx, HPy h)
{
    return debug_ctx_Bytes_AS_STRING(ctx, _h2d(h));
}

DHPy debug_ctx_Bytes_FromString(HPyContext ctx, const char *v);
HPy _adapter_debug_ctx_Bytes_FromString(HPyContext ctx, const char *v)
{
    return _d2h(debug_ctx_Bytes_FromString(ctx, v));
}

DHPy debug_ctx_Bytes_FromStringAndSize(HPyContext ctx, const char *v, HPy_ssize_t len);
HPy _adapter_debug_ctx_Bytes_FromStringAndSize(HPyContext ctx, const char *v, HPy_ssize_t len)
{
    return _d2h(debug_ctx_Bytes_FromStringAndSize(ctx, v, len));
}

DHPy debug_ctx_Unicode_FromString(HPyContext ctx, const char *utf8);
HPy _adapter_debug_ctx_Unicode_FromString(HPyContext ctx, const char *utf8)
{
    return _d2h(debug_ctx_Unicode_FromString(ctx, utf8));
}

int debug_ctx_Unicode_Check(HPyContext ctx, DHPy h);
int _adapter_debug_ctx_Unicode_Check(HPyContext ctx, HPy h)
{
    return debug_ctx_Unicode_Check(ctx, _h2d(h));
}

DHPy debug_ctx_Unicode_AsUTF8String(HPyContext ctx, DHPy h);
HPy _adapter_debug_ctx_Unicode_AsUTF8String(HPyContext ctx, HPy h)
{
    return _d2h(debug_ctx_Unicode_AsUTF8String(ctx, _h2d(h)));
}

DHPy debug_ctx_Unicode_FromWideChar(HPyContext ctx, const wchar_t *w, HPy_ssize_t size);
HPy _adapter_debug_ctx_Unicode_FromWideChar(HPyContext ctx, const wchar_t *w, HPy_ssize_t size)
{
    return _d2h(debug_ctx_Unicode_FromWideChar(ctx, w, size));
}

int debug_ctx_List_Check(HPyContext ctx, DHPy h);
int _adapter_debug_ctx_List_Check(HPyContext ctx, HPy h)
{
    return debug_ctx_List_Check(ctx, _h2d(h));
}

DHPy debug_ctx_List_New(HPyContext ctx, HPy_ssize_t len);
HPy _adapter_debug_ctx_List_New(HPyContext ctx, HPy_ssize_t len)
{
    return _d2h(debug_ctx_List_New(ctx, len));
}

int debug_ctx_List_Append(HPyContext ctx, DHPy h_list, DHPy h_item);
int _adapter_debug_ctx_List_Append(HPyContext ctx, HPy h_list, HPy h_item)
{
    return debug_ctx_List_Append(ctx, _h2d(h_list), _h2d(h_item));
}

int debug_ctx_Dict_Check(HPyContext ctx, DHPy h);
int _adapter_debug_ctx_Dict_Check(HPyContext ctx, HPy h)
{
    return debug_ctx_Dict_Check(ctx, _h2d(h));
}

DHPy debug_ctx_Dict_New(HPyContext ctx);
HPy _adapter_debug_ctx_Dict_New(HPyContext ctx)
{
    return _d2h(debug_ctx_Dict_New(ctx));
}

void debug_ctx_FatalError(HPyContext ctx, const char *message);
void _adapter_debug_ctx_FatalError(HPyContext ctx, const char *message)
{
    debug_ctx_FatalError(ctx, message);
}

DHPy debug_ctx_Tuple_FromArray(HPyContext ctx, DHPy items[], HPy_ssize_t n);
HPy _adapter_debug_ctx_Tuple_FromArray(HPyContext ctx, HPy items[], HPy_ssize_t n)
{
    return _d2h(debug_ctx_Tuple_FromArray(ctx, (DHPy *)items, n));
}

DHPy debug_ctx_FromPyObject(HPyContext ctx, cpy_PyObject *obj);
HPy _adapter_debug_ctx_FromPyObject(HPyContext ctx, cpy_PyObject *obj)
{
    return _d2h(debug_ctx_FromPyObject(ctx, obj));
}

cpy_PyObject *debug_ctx_AsPyObject(HPyContext ctx, DHPy h);
cpy_PyObject *_adapter_debug_ctx_AsPyObject(HPyContext ctx, HPy h)
{
    return debug_ctx_AsPyObject(ctx, _h2d(h));
}

void debug_ctx_CallRealFunctionFromTrampoline(HPyContext ctx, HPyFunc_Signature sig, void *func, void *args);
void _adapter_debug_ctx_CallRealFunctionFromTrampoline(HPyContext ctx, HPyFunc_Signature sig, void *func, void *args)
{
    debug_ctx_CallRealFunctionFromTrampoline(ctx, sig, func, args);
}

void debug_ctx_CallDestroyAndThenDealloc(HPyContext ctx, void *func, cpy_PyObject *self);
void _adapter_debug_ctx_CallDestroyAndThenDealloc(HPyContext ctx, void *func, cpy_PyObject *self)
{
    debug_ctx_CallDestroyAndThenDealloc(ctx, func, self);
}

HPyListBuilder debug_ctx_ListBuilder_New(HPyContext ctx, HPy_ssize_t initial_size);
HPyListBuilder _adapter_debug_ctx_ListBuilder_New(HPyContext ctx, HPy_ssize_t initial_size)
{
    return debug_ctx_ListBuilder_New(ctx, initial_size);
}

void debug_ctx_ListBuilder_Set(HPyContext ctx, HPyListBuilder builder, HPy_ssize_t index, DHPy h_item);
void _adapter_debug_ctx_ListBuilder_Set(HPyContext ctx, HPyListBuilder builder, HPy_ssize_t index, HPy h_item)
{
    debug_ctx_ListBuilder_Set(ctx, builder, index, _h2d(h_item));
}

DHPy debug_ctx_ListBuilder_Build(HPyContext ctx, HPyListBuilder builder);
HPy _adapter_debug_ctx_ListBuilder_Build(HPyContext ctx, HPyListBuilder builder)
{
    return _d2h(debug_ctx_ListBuilder_Build(ctx, builder));
}

void debug_ctx_ListBuilder_Cancel(HPyContext ctx, HPyListBuilder builder);
void _adapter_debug_ctx_ListBuilder_Cancel(HPyContext ctx, HPyListBuilder builder)
{
    debug_ctx_ListBuilder_Cancel(ctx, builder);
}

HPyTupleBuilder debug_ctx_TupleBuilder_New(HPyContext ctx, HPy_ssize_t initial_size);
HPyTupleBuilder _adapter_debug_ctx_TupleBuilder_New(HPyContext ctx, HPy_ssize_t initial_size)
{
    return debug_ctx_TupleBuilder_New(ctx, initial_size);
}

void debug_ctx_TupleBuilder_Set(HPyContext ctx, HPyTupleBuilder builder, HPy_ssize_t index, DHPy h_item);
void _adapter_debug_ctx_TupleBuilder_Set(HPyContext ctx, HPyTupleBuilder builder, HPy_ssize_t index, HPy h_item)
{
    debug_ctx_TupleBuilder_Set(ctx, builder, index, _h2d(h_item));
}

DHPy debug_ctx_TupleBuilder_Build(HPyContext ctx, HPyTupleBuilder builder);
HPy _adapter_debug_ctx_TupleBuilder_Build(HPyContext ctx, HPyTupleBuilder builder)
{
    return _d2h(debug_ctx_TupleBuilder_Build(ctx, builder));
}

void debug_ctx_TupleBuilder_Cancel(HPyContext ctx, HPyTupleBuilder builder);
void _adapter_debug_ctx_TupleBuilder_Cancel(HPyContext ctx, HPyTupleBuilder builder)
{
    debug_ctx_TupleBuilder_Cancel(ctx, builder);
}

HPyTracker debug_ctx_Tracker_New(HPyContext ctx, HPy_ssize_t size);
HPyTracker _adapter_debug_ctx_Tracker_New(HPyContext ctx, HPy_ssize_t size)
{
    return debug_ctx_Tracker_New(ctx, size);
}

int debug_ctx_Tracker_Add(HPyContext ctx, HPyTracker ht, DHPy h);
int _adapter_debug_ctx_Tracker_Add(HPyContext ctx, HPyTracker ht, HPy h)
{
    return debug_ctx_Tracker_Add(ctx, ht, _h2d(h));
}

void debug_ctx_Tracker_ForgetAll(HPyContext ctx, HPyTracker ht);
void _adapter_debug_ctx_Tracker_ForgetAll(HPyContext ctx, HPyTracker ht)
{
    debug_ctx_Tracker_ForgetAll(ctx, ht);
}

void debug_ctx_Tracker_Close(HPyContext ctx, HPyTracker ht);
void _adapter_debug_ctx_Tracker_Close(HPyContext ctx, HPyTracker ht)
{
    debug_ctx_Tracker_Close(ctx, ht);
}


static struct _HPyContext_s g_debug_ctx = {
    .name = "HPy Debug Mode ABI",
    ._private = NULL,
    .ctx_version = 1,
    .h_None = HPy_NULL,
    .h_True = HPy_NULL,
    .h_False = HPy_NULL,
    .h_BaseException = HPy_NULL,
    .h_Exception = HPy_NULL,
    .h_StopAsyncIteration = HPy_NULL,
    .h_StopIteration = HPy_NULL,
    .h_GeneratorExit = HPy_NULL,
    .h_ArithmeticError = HPy_NULL,
    .h_LookupError = HPy_NULL,
    .h_AssertionError = HPy_NULL,
    .h_AttributeError = HPy_NULL,
    .h_BufferError = HPy_NULL,
    .h_EOFError = HPy_NULL,
    .h_FloatingPointError = HPy_NULL,
    .h_OSError = HPy_NULL,
    .h_ImportError = HPy_NULL,
    .h_ModuleNotFoundError = HPy_NULL,
    .h_IndexError = HPy_NULL,
    .h_KeyError = HPy_NULL,
    .h_KeyboardInterrupt = HPy_NULL,
    .h_MemoryError = HPy_NULL,
    .h_NameError = HPy_NULL,
    .h_OverflowError = HPy_NULL,
    .h_RuntimeError = HPy_NULL,
    .h_RecursionError = HPy_NULL,
    .h_NotImplementedError = HPy_NULL,
    .h_SyntaxError = HPy_NULL,
    .h_IndentationError = HPy_NULL,
    .h_TabError = HPy_NULL,
    .h_ReferenceError = HPy_NULL,
    .h_SystemError = HPy_NULL,
    .h_SystemExit = HPy_NULL,
    .h_TypeError = HPy_NULL,
    .h_UnboundLocalError = HPy_NULL,
    .h_UnicodeError = HPy_NULL,
    .h_UnicodeEncodeError = HPy_NULL,
    .h_UnicodeDecodeError = HPy_NULL,
    .h_UnicodeTranslateError = HPy_NULL,
    .h_ValueError = HPy_NULL,
    .h_ZeroDivisionError = HPy_NULL,
    .h_BlockingIOError = HPy_NULL,
    .h_BrokenPipeError = HPy_NULL,
    .h_ChildProcessError = HPy_NULL,
    .h_ConnectionError = HPy_NULL,
    .h_ConnectionAbortedError = HPy_NULL,
    .h_ConnectionRefusedError = HPy_NULL,
    .h_ConnectionResetError = HPy_NULL,
    .h_FileExistsError = HPy_NULL,
    .h_FileNotFoundError = HPy_NULL,
    .h_InterruptedError = HPy_NULL,
    .h_IsADirectoryError = HPy_NULL,
    .h_NotADirectoryError = HPy_NULL,
    .h_PermissionError = HPy_NULL,
    .h_ProcessLookupError = HPy_NULL,
    .h_TimeoutError = HPy_NULL,
    .h_Warning = HPy_NULL,
    .h_UserWarning = HPy_NULL,
    .h_DeprecationWarning = HPy_NULL,
    .h_PendingDeprecationWarning = HPy_NULL,
    .h_SyntaxWarning = HPy_NULL,
    .h_RuntimeWarning = HPy_NULL,
    .h_FutureWarning = HPy_NULL,
    .h_ImportWarning = HPy_NULL,
    .h_UnicodeWarning = HPy_NULL,
    .h_BytesWarning = HPy_NULL,
    .h_ResourceWarning = HPy_NULL,
    .h_BaseObjectType = HPy_NULL,
    .h_TypeType = HPy_NULL,
    .h_LongType = HPy_NULL,
    .h_UnicodeType = HPy_NULL,
    .h_TupleType = HPy_NULL,
    .h_ListType = HPy_NULL,
    .ctx_Module_Create = &_adapter_debug_ctx_Module_Create,
    .ctx_Dup = &_adapter_debug_ctx_Dup,
    .ctx_Close = &_adapter_debug_ctx_Close,
    .ctx_Long_FromLong = &_adapter_debug_ctx_Long_FromLong,
    .ctx_Long_FromUnsignedLong = &_adapter_debug_ctx_Long_FromUnsignedLong,
    .ctx_Long_FromLongLong = &_adapter_debug_ctx_Long_FromLongLong,
    .ctx_Long_FromUnsignedLongLong = &_adapter_debug_ctx_Long_FromUnsignedLongLong,
    .ctx_Long_FromSize_t = &_adapter_debug_ctx_Long_FromSize_t,
    .ctx_Long_FromSsize_t = &_adapter_debug_ctx_Long_FromSsize_t,
    .ctx_Long_AsLong = &_adapter_debug_ctx_Long_AsLong,
    .ctx_Long_AsUnsignedLong = &_adapter_debug_ctx_Long_AsUnsignedLong,
    .ctx_Long_AsUnsignedLongMask = &_adapter_debug_ctx_Long_AsUnsignedLongMask,
    .ctx_Long_AsLongLong = &_adapter_debug_ctx_Long_AsLongLong,
    .ctx_Long_AsUnsignedLongLong = &_adapter_debug_ctx_Long_AsUnsignedLongLong,
    .ctx_Long_AsUnsignedLongLongMask = &_adapter_debug_ctx_Long_AsUnsignedLongLongMask,
    .ctx_Long_AsSize_t = &_adapter_debug_ctx_Long_AsSize_t,
    .ctx_Long_AsSsize_t = &_adapter_debug_ctx_Long_AsSsize_t,
    .ctx_Float_FromDouble = &_adapter_debug_ctx_Float_FromDouble,
    .ctx_Float_AsDouble = &_adapter_debug_ctx_Float_AsDouble,
    .ctx_Length = &_adapter_debug_ctx_Length,
    .ctx_Number_Check = &_adapter_debug_ctx_Number_Check,
    .ctx_Add = &_adapter_debug_ctx_Add,
    .ctx_Subtract = &_adapter_debug_ctx_Subtract,
    .ctx_Multiply = &_adapter_debug_ctx_Multiply,
    .ctx_MatrixMultiply = &_adapter_debug_ctx_MatrixMultiply,
    .ctx_FloorDivide = &_adapter_debug_ctx_FloorDivide,
    .ctx_TrueDivide = &_adapter_debug_ctx_TrueDivide,
    .ctx_Remainder = &_adapter_debug_ctx_Remainder,
    .ctx_Divmod = &_adapter_debug_ctx_Divmod,
    .ctx_Power = &_adapter_debug_ctx_Power,
    .ctx_Negative = &_adapter_debug_ctx_Negative,
    .ctx_Positive = &_adapter_debug_ctx_Positive,
    .ctx_Absolute = &_adapter_debug_ctx_Absolute,
    .ctx_Invert = &_adapter_debug_ctx_Invert,
    .ctx_Lshift = &_adapter_debug_ctx_Lshift,
    .ctx_Rshift = &_adapter_debug_ctx_Rshift,
    .ctx_And = &_adapter_debug_ctx_And,
    .ctx_Xor = &_adapter_debug_ctx_Xor,
    .ctx_Or = &_adapter_debug_ctx_Or,
    .ctx_Index = &_adapter_debug_ctx_Index,
    .ctx_Long = &_adapter_debug_ctx_Long,
    .ctx_Float = &_adapter_debug_ctx_Float,
    .ctx_InPlaceAdd = &_adapter_debug_ctx_InPlaceAdd,
    .ctx_InPlaceSubtract = &_adapter_debug_ctx_InPlaceSubtract,
    .ctx_InPlaceMultiply = &_adapter_debug_ctx_InPlaceMultiply,
    .ctx_InPlaceMatrixMultiply = &_adapter_debug_ctx_InPlaceMatrixMultiply,
    .ctx_InPlaceFloorDivide = &_adapter_debug_ctx_InPlaceFloorDivide,
    .ctx_InPlaceTrueDivide = &_adapter_debug_ctx_InPlaceTrueDivide,
    .ctx_InPlaceRemainder = &_adapter_debug_ctx_InPlaceRemainder,
    .ctx_InPlacePower = &_adapter_debug_ctx_InPlacePower,
    .ctx_InPlaceLshift = &_adapter_debug_ctx_InPlaceLshift,
    .ctx_InPlaceRshift = &_adapter_debug_ctx_InPlaceRshift,
    .ctx_InPlaceAnd = &_adapter_debug_ctx_InPlaceAnd,
    .ctx_InPlaceXor = &_adapter_debug_ctx_InPlaceXor,
    .ctx_InPlaceOr = &_adapter_debug_ctx_InPlaceOr,
    .ctx_Err_SetString = &_adapter_debug_ctx_Err_SetString,
    .ctx_Err_SetObject = &_adapter_debug_ctx_Err_SetObject,
    .ctx_Err_Occurred = &_adapter_debug_ctx_Err_Occurred,
    .ctx_Err_NoMemory = &_adapter_debug_ctx_Err_NoMemory,
    .ctx_Err_Clear = &_adapter_debug_ctx_Err_Clear,
    .ctx_IsTrue = &_adapter_debug_ctx_IsTrue,
    .ctx_Type_FromSpec = &_adapter_debug_ctx_Type_FromSpec,
    .ctx_Type_GenericNew = &_adapter_debug_ctx_Type_GenericNew,
    .ctx_GetAttr = &_adapter_debug_ctx_GetAttr,
    .ctx_GetAttr_s = &_adapter_debug_ctx_GetAttr_s,
    .ctx_HasAttr = &_adapter_debug_ctx_HasAttr,
    .ctx_HasAttr_s = &_adapter_debug_ctx_HasAttr_s,
    .ctx_SetAttr = &_adapter_debug_ctx_SetAttr,
    .ctx_SetAttr_s = &_adapter_debug_ctx_SetAttr_s,
    .ctx_GetItem = &_adapter_debug_ctx_GetItem,
    .ctx_GetItem_i = &_adapter_debug_ctx_GetItem_i,
    .ctx_GetItem_s = &_adapter_debug_ctx_GetItem_s,
    .ctx_SetItem = &_adapter_debug_ctx_SetItem,
    .ctx_SetItem_i = &_adapter_debug_ctx_SetItem_i,
    .ctx_SetItem_s = &_adapter_debug_ctx_SetItem_s,
    .ctx_Cast = &_adapter_debug_ctx_Cast,
    .ctx_New = &_adapter_debug_ctx_New,
    .ctx_Repr = &_adapter_debug_ctx_Repr,
    .ctx_Str = &_adapter_debug_ctx_Str,
    .ctx_ASCII = &_adapter_debug_ctx_ASCII,
    .ctx_Bytes = &_adapter_debug_ctx_Bytes,
    .ctx_RichCompare = &_adapter_debug_ctx_RichCompare,
    .ctx_RichCompareBool = &_adapter_debug_ctx_RichCompareBool,
    .ctx_Hash = &_adapter_debug_ctx_Hash,
    .ctx_Bytes_Check = &_adapter_debug_ctx_Bytes_Check,
    .ctx_Bytes_Size = &_adapter_debug_ctx_Bytes_Size,
    .ctx_Bytes_GET_SIZE = &_adapter_debug_ctx_Bytes_GET_SIZE,
    .ctx_Bytes_AsString = &_adapter_debug_ctx_Bytes_AsString,
    .ctx_Bytes_AS_STRING = &_adapter_debug_ctx_Bytes_AS_STRING,
    .ctx_Bytes_FromString = &_adapter_debug_ctx_Bytes_FromString,
    .ctx_Bytes_FromStringAndSize = &_adapter_debug_ctx_Bytes_FromStringAndSize,
    .ctx_Unicode_FromString = &_adapter_debug_ctx_Unicode_FromString,
    .ctx_Unicode_Check = &_adapter_debug_ctx_Unicode_Check,
    .ctx_Unicode_AsUTF8String = &_adapter_debug_ctx_Unicode_AsUTF8String,
    .ctx_Unicode_FromWideChar = &_adapter_debug_ctx_Unicode_FromWideChar,
    .ctx_List_Check = &_adapter_debug_ctx_List_Check,
    .ctx_List_New = &_adapter_debug_ctx_List_New,
    .ctx_List_Append = &_adapter_debug_ctx_List_Append,
    .ctx_Dict_Check = &_adapter_debug_ctx_Dict_Check,
    .ctx_Dict_New = &_adapter_debug_ctx_Dict_New,
    .ctx_FatalError = &_adapter_debug_ctx_FatalError,
    .ctx_Tuple_FromArray = &_adapter_debug_ctx_Tuple_FromArray,
    .ctx_FromPyObject = &_adapter_debug_ctx_FromPyObject,
    .ctx_AsPyObject = &_adapter_debug_ctx_AsPyObject,
    .ctx_CallRealFunctionFromTrampoline = &_adapter_debug_ctx_CallRealFunctionFromTrampoline,
    .ctx_CallDestroyAndThenDealloc = &_adapter_debug_ctx_CallDestroyAndThenDealloc,
    .ctx_ListBuilder_New = &_adapter_debug_ctx_ListBuilder_New,
    .ctx_ListBuilder_Set = &_adapter_debug_ctx_ListBuilder_Set,
    .ctx_ListBuilder_Build = &_adapter_debug_ctx_ListBuilder_Build,
    .ctx_ListBuilder_Cancel = &_adapter_debug_ctx_ListBuilder_Cancel,
    .ctx_TupleBuilder_New = &_adapter_debug_ctx_TupleBuilder_New,
    .ctx_TupleBuilder_Set = &_adapter_debug_ctx_TupleBuilder_Set,
    .ctx_TupleBuilder_Build = &_adapter_debug_ctx_TupleBuilder_Build,
    .ctx_TupleBuilder_Cancel = &_adapter_debug_ctx_TupleBuilder_Cancel,
    .ctx_Tracker_New = &_adapter_debug_ctx_Tracker_New,
    .ctx_Tracker_Add = &_adapter_debug_ctx_Tracker_Add,
    .ctx_Tracker_ForgetAll = &_adapter_debug_ctx_Tracker_ForgetAll,
    .ctx_Tracker_Close = &_adapter_debug_ctx_Tracker_Close,
};
