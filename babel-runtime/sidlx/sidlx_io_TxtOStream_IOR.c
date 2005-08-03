/*
 * File:          sidlx_io_TxtOStream_IOR.c
 * Symbol:        sidlx.io.TxtOStream-v0.1
 * Symbol Type:   class
 * Babel Version: 0.10.8
 * Description:   Intermediate Object Representation for sidlx.io.TxtOStream
 * 
 * WARNING: Automatically generated; changes will be lost
 * 
 * babel-version = 0.10.8
 */

#include "sidl_rmi_InstanceHandle.h"
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include "sidlx_io_TxtOStream_IOR.h"
#ifndef included_sidl_BaseClass_Impl_h
#include "sidl_BaseClass_Impl.h"
#endif
#ifndef included_sidl_BaseClass_h
#include "sidl_BaseClass.h"
#endif
#ifndef included_sidl_ClassInfo_h
#include "sidl_ClassInfo.h"
#endif
#ifndef included_sidl_ClassInfoI_h
#include "sidl_ClassInfoI.h"
#endif

#ifndef NULL
#define NULL 0
#endif

#include "sidl_thread.h"
#ifdef HAVE_PTHREAD
static struct sidl_recursive_mutex_t sidlx_io_TxtOStream__mutex= SIDL_RECURSIVE_MUTEX_INITIALIZER;
#define LOCK_STATIC_GLOBALS sidl_recursive_mutex_lock( &sidlx_io_TxtOStream__mutex )
#define UNLOCK_STATIC_GLOBALS sidl_recursive_mutex_unlock( &sidlx_io_TxtOStream__mutex )
/* #define HAVE_LOCKED_STATIC_GLOBALS (sidl_recursive_mutex_trylock( &sidlx_io_TxtOStream__mutex )==EDEADLOCK) */
#else
#define LOCK_STATIC_GLOBALS
#define UNLOCK_STATIC_GLOBALS
/* #define HAVE_LOCKED_STATIC_GLOBALS (1) */
#endif

/*
 * Static variables to hold version of IOR
 */

static const int32_t s_IOR_MAJOR_VERSION = 0;
static const int32_t s_IOR_MINOR_VERSION = 9;

/*
 * Static variable to hold shared ClassInfo interface.
 */

static sidl_ClassInfo s_classInfo = NULL;
static int s_classInfo_init = 1;

/*
 * Static variable to make sure _load called no more than once
 */

static int s_load_called = 0;
/*
 * Static variables for managing EPV initialization.
 */

static int s_method_initialized = 0;

static struct sidlx_io_TxtOStream__epv s_new_epv__sidlx_io_txtostream;

static struct sidl_BaseClass__epv  s_new_epv__sidl_baseclass;
static struct sidl_BaseClass__epv* s_old_epv__sidl_baseclass;

static struct sidl_BaseInterface__epv  s_new_epv__sidl_baseinterface;
static struct sidl_BaseInterface__epv* s_old_epv__sidl_baseinterface;

static struct sidlx_io_OStream__epv s_new_epv__sidlx_io_ostream;

/*
 * Declare EPV routines defined in the skeleton file.
 */

#ifdef __cplusplus
extern "C" {
#endif

extern void sidlx_io_TxtOStream__set_epv(
  struct sidlx_io_TxtOStream__epv* epv);
extern void sidlx_io_TxtOStream__call_load(void);
#ifdef __cplusplus
}
#endif

static void
sidlx_io_TxtOStream_addRef__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  /* unpack in and inout argments */

  /* make the call */
  (self->d_epv->f_addRef)(
    self);

  /* pack return value */
  /* pack out and inout argments */

}

static void
sidlx_io_TxtOStream_deleteRef__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  /* unpack in and inout argments */

  /* make the call */
  (self->d_epv->f_deleteRef)(
    self);

  /* pack return value */
  /* pack out and inout argments */

}

static void
sidlx_io_TxtOStream_isSame__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  struct sidl_BaseInterface__object* iobj;
  sidl_bool _retval;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_isSame)(
    self,
    iobj);

  /* pack return value */
  sidl_io_Serializer_packBool( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
sidlx_io_TxtOStream_queryInt__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  char* name= NULL;
  struct sidl_BaseInterface__object* _retval;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackString( inArgs, "name", &name, _ex2);

  /* make the call */
  _retval = (self->d_epv->f_queryInt)(
    self,
    name);

  /* pack return value */
  /* pack out and inout argments */

}

static void
sidlx_io_TxtOStream_isType__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  char* name= NULL;
  sidl_bool _retval;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackString( inArgs, "name", &name, _ex2);

  /* make the call */
  _retval = (self->d_epv->f_isType)(
    self,
    name);

  /* pack return value */
  sidl_io_Serializer_packBool( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
sidlx_io_TxtOStream_getClassInfo__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  struct sidl_ClassInfo__object* _retval;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_getClassInfo)(
    self);

  /* pack return value */
  /* pack out and inout argments */

}

static void
sidlx_io_TxtOStream_setFD__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  int32_t fd;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackInt( inArgs, "fd", &fd, _ex2);

  /* make the call */
  (self->d_epv->f_setFD)(
    self,
    fd);

  /* pack return value */
  /* pack out and inout argments */

}

static void
sidlx_io_TxtOStream_flush__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  /* unpack in and inout argments */

  /* make the call */
  (self->d_epv->f_flush)(
    self);

  /* pack return value */
  /* pack out and inout argments */

}

static void
sidlx_io_TxtOStream_write__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  struct sidl_char__array* data;
  int32_t _retval;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */

  /* make the call */
  _retval = (self->d_epv->f_write)(
    self,
    data,
    _ex2);

  /* check if exception thrown */
  /* FIXME */

  /* pack return value */
  sidl_io_Serializer_packInt( outArgs, "_retval", _retval, _ex2);

  /* pack out and inout argments */

}

static void
sidlx_io_TxtOStream_putBool__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  sidl_bool item;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackBool( inArgs, "item", &item, _ex2);

  /* make the call */
  (self->d_epv->f_putBool)(
    self,
    item,
    _ex2);

  /* check if exception thrown */
  /* FIXME */

  /* pack return value */
  /* pack out and inout argments */

}

static void
sidlx_io_TxtOStream_putChar__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  char item;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackChar( inArgs, "item", &item, _ex2);

  /* make the call */
  (self->d_epv->f_putChar)(
    self,
    item,
    _ex2);

  /* check if exception thrown */
  /* FIXME */

  /* pack return value */
  /* pack out and inout argments */

}

static void
sidlx_io_TxtOStream_putInt__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  int32_t item;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackInt( inArgs, "item", &item, _ex2);

  /* make the call */
  (self->d_epv->f_putInt)(
    self,
    item,
    _ex2);

  /* check if exception thrown */
  /* FIXME */

  /* pack return value */
  /* pack out and inout argments */

}

static void
sidlx_io_TxtOStream_putLong__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  int64_t item;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackLong( inArgs, "item", &item, _ex2);

  /* make the call */
  (self->d_epv->f_putLong)(
    self,
    item,
    _ex2);

  /* check if exception thrown */
  /* FIXME */

  /* pack return value */
  /* pack out and inout argments */

}

static void
sidlx_io_TxtOStream_putFloat__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  float item;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackFloat( inArgs, "item", &item, _ex2);

  /* make the call */
  (self->d_epv->f_putFloat)(
    self,
    item,
    _ex2);

  /* check if exception thrown */
  /* FIXME */

  /* pack return value */
  /* pack out and inout argments */

}

static void
sidlx_io_TxtOStream_putDouble__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  double item;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackDouble( inArgs, "item", &item, _ex2);

  /* make the call */
  (self->d_epv->f_putDouble)(
    self,
    item,
    _ex2);

  /* check if exception thrown */
  /* FIXME */

  /* pack return value */
  /* pack out and inout argments */

}

static void
sidlx_io_TxtOStream_putFcomplex__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  struct sidl_fcomplex item;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackFcomplex( inArgs, "item", &item, _ex2);

  /* make the call */
  (self->d_epv->f_putFcomplex)(
    self,
    item,
    _ex2);

  /* check if exception thrown */
  /* FIXME */

  /* pack return value */
  /* pack out and inout argments */

}

static void
sidlx_io_TxtOStream_putDcomplex__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  struct sidl_dcomplex item;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackDcomplex( inArgs, "item", &item, _ex2);

  /* make the call */
  (self->d_epv->f_putDcomplex)(
    self,
    item,
    _ex2);

  /* check if exception thrown */
  /* FIXME */

  /* pack return value */
  /* pack out and inout argments */

}

static void
sidlx_io_TxtOStream_putString__exec(
        struct sidlx_io_TxtOStream__object* self,
        struct sidl_io_Deserializer__object* inArgs,
        struct sidl_io_Serializer__object* outArgs) {
  /* stack space for arguments */
  char* item= NULL;
  sidl_BaseInterface _ex   = NULL;
  sidl_BaseInterface *_ex2 = &_ex;
  /* unpack in and inout argments */
  sidl_io_Deserializer_unpackString( inArgs, "item", &item, _ex2);

  /* make the call */
  (self->d_epv->f_putString)(
    self,
    item,
    _ex2);

  /* check if exception thrown */
  /* FIXME */

  /* pack return value */
  /* pack out and inout argments */

}

static void ior_sidlx_io_TxtOStream__ensure_load_called(void) {
  /*
   * assert( HAVE_LOCKED_STATIC_GLOBALS );
   */

  if (! s_load_called ) {
    sidlx_io_TxtOStream__call_load();
    s_load_called=1;
  }
}
/*
 * CAST: dynamic type casting support.
 */

static void* ior_sidlx_io_TxtOStream__cast(
  struct sidlx_io_TxtOStream__object* self,
  const char* name)
{
  void* cast = NULL;

  struct sidlx_io_TxtOStream__object* s0 = self;
  struct sidl_BaseClass__object*      s1 = &s0->d_sidl_baseclass;

  if (!strcmp(name, "sidlx.io.TxtOStream")) {
    cast = (void*) s0;
  } else if (!strcmp(name, "sidlx.io.OStream")) {
    cast = (void*) &s0->d_sidlx_io_ostream;
  } else if (!strcmp(name, "sidl.BaseClass")) {
    cast = (void*) s1;
  } else if (!strcmp(name, "sidl.BaseInterface")) {
    cast = (void*) &s1->d_sidl_baseinterface;
  }

  return cast;
}

/*
 * DELETE: call destructor and free object memory.
 */

static void ior_sidlx_io_TxtOStream__delete(
  struct sidlx_io_TxtOStream__object* self)
{
  sidlx_io_TxtOStream__fini(self);
  memset((void*)self, 0, sizeof(struct sidlx_io_TxtOStream__object));
  free((void*) self);
}

static char*
ior_sidlx_io_TxtOStream__getURL(
    struct sidlx_io_TxtOStream__object* self) {
  sidl_rmi_InstanceHandle conn = (sidl_rmi_InstanceHandle)self->d_data;
  sidl_BaseInterface _ex = NULL;
  /* TODO: Make this work for local object! */
  return NULL;
}
struct sidlx_io_TxtOStream__method {
  const char *d_name;
  void (*d_func)(struct sidlx_io_TxtOStream__object*,
    struct sidl_io_Deserializer__object *,
    struct sidl_io_Serializer__object *);
};

static void
ior_sidlx_io_TxtOStream__exec(
    struct sidlx_io_TxtOStream__object* self,
    const char* methodName,
    struct sidl_io_Deserializer__object* inArgs,
    struct sidl_io_Serializer__object* outArgs ) { 
  static const struct sidlx_io_TxtOStream__method  s_methods[] = {
    { "addRef", sidlx_io_TxtOStream_addRef__exec },
    { "deleteRef", sidlx_io_TxtOStream_deleteRef__exec },
    { "flush", sidlx_io_TxtOStream_flush__exec },
    { "getClassInfo", sidlx_io_TxtOStream_getClassInfo__exec },
    { "isSame", sidlx_io_TxtOStream_isSame__exec },
    { "isType", sidlx_io_TxtOStream_isType__exec },
    { "putBool", sidlx_io_TxtOStream_putBool__exec },
    { "putChar", sidlx_io_TxtOStream_putChar__exec },
    { "putDcomplex", sidlx_io_TxtOStream_putDcomplex__exec },
    { "putDouble", sidlx_io_TxtOStream_putDouble__exec },
    { "putFcomplex", sidlx_io_TxtOStream_putFcomplex__exec },
    { "putFloat", sidlx_io_TxtOStream_putFloat__exec },
    { "putInt", sidlx_io_TxtOStream_putInt__exec },
    { "putLong", sidlx_io_TxtOStream_putLong__exec },
    { "putString", sidlx_io_TxtOStream_putString__exec },
    { "queryInt", sidlx_io_TxtOStream_queryInt__exec },
    { "setFD", sidlx_io_TxtOStream_setFD__exec },
    { "write", sidlx_io_TxtOStream_write__exec }
  };
  int i, cmp, l = 0;
  int u = sizeof(s_methods)/sizeof(struct sidlx_io_TxtOStream__method);
  if (methodName) {
    /* Use binary search to locate method */
    while (l < u) {
      i = (l + u) >> 1;
      if (!(cmp=strcmp(methodName, s_methods[i].d_name))) {
        (s_methods[i].d_func)(self, inArgs, outArgs);
        return;
      }
      else if (cmp < 0) u = i;
      else l = i + 1;
    }
  }
  /* TODO: add code for method not found */
}
/*
 * EPV: create method entry point vector (EPV) structure.
 */

static void sidlx_io_TxtOStream__init_epv(
  struct sidlx_io_TxtOStream__object* self)
{
/*
 * assert( HAVE_LOCKED_STATIC_GLOBALS );
 */

  struct sidlx_io_TxtOStream__object* s0 = self;
  struct sidl_BaseClass__object*      s1 = &s0->d_sidl_baseclass;

  struct sidlx_io_TxtOStream__epv*  epv  = &s_new_epv__sidlx_io_txtostream;
  struct sidl_BaseClass__epv*       e0   = &s_new_epv__sidl_baseclass;
  struct sidl_BaseInterface__epv*   e1   = &s_new_epv__sidl_baseinterface;
  struct sidlx_io_OStream__epv*     e2   = &s_new_epv__sidlx_io_ostream;

  s_old_epv__sidl_baseinterface = s1->d_sidl_baseinterface.d_epv;
  s_old_epv__sidl_baseclass     = s1->d_epv;

  epv->f__cast                    = ior_sidlx_io_TxtOStream__cast;
  epv->f__delete                  = ior_sidlx_io_TxtOStream__delete;
  epv->f__exec                    = ior_sidlx_io_TxtOStream__exec;
  epv->f__getURL                  = ior_sidlx_io_TxtOStream__getURL;
  epv->f__ctor                    = NULL;
  epv->f__dtor                    = NULL;
  epv->f_addRef                   = (void (*)(struct 
    sidlx_io_TxtOStream__object*)) s1->d_epv->f_addRef;
  epv->f_deleteRef                = (void (*)(struct 
    sidlx_io_TxtOStream__object*)) s1->d_epv->f_deleteRef;
  epv->f_isSame                   = (sidl_bool (*)(struct 
    sidlx_io_TxtOStream__object*,
    struct sidl_BaseInterface__object*)) s1->d_epv->f_isSame;
  epv->f_queryInt                 = (struct sidl_BaseInterface__object* 
    (*)(struct sidlx_io_TxtOStream__object*,const char*)) s1->d_epv->f_queryInt;
  epv->f_isType                   = (sidl_bool (*)(struct 
    sidlx_io_TxtOStream__object*,const char*)) s1->d_epv->f_isType;
  epv->f_getClassInfo             = (struct sidl_ClassInfo__object* (*)(struct 
    sidlx_io_TxtOStream__object*)) s1->d_epv->f_getClassInfo;
  epv->f_setFD                    = NULL;
  epv->f_flush                    = NULL;
  epv->f_write                    = NULL;
  epv->f_putBool                  = NULL;
  epv->f_putChar                  = NULL;
  epv->f_putInt                   = NULL;
  epv->f_putLong                  = NULL;
  epv->f_putFloat                 = NULL;
  epv->f_putDouble                = NULL;
  epv->f_putFcomplex              = NULL;
  epv->f_putDcomplex              = NULL;
  epv->f_putString                = NULL;

  sidlx_io_TxtOStream__set_epv(epv);

  e0->f__cast               = (void* (*)(struct sidl_BaseClass__object*,
    const char*)) epv->f__cast;
  e0->f__delete             = (void (*)(struct sidl_BaseClass__object*)) 
    epv->f__delete;
  e0->f__exec               = (void (*)(struct sidl_BaseClass__object*,
    const char*,struct sidl_io_Deserializer__object*,
    struct sidl_io_Serializer__object*)) epv->f__exec;
  e0->f_addRef              = (void (*)(struct sidl_BaseClass__object*)) 
    epv->f_addRef;
  e0->f_deleteRef           = (void (*)(struct sidl_BaseClass__object*)) 
    epv->f_deleteRef;
  e0->f_isSame              = (sidl_bool (*)(struct sidl_BaseClass__object*,
    struct sidl_BaseInterface__object*)) epv->f_isSame;
  e0->f_queryInt            = (struct sidl_BaseInterface__object* (*)(struct 
    sidl_BaseClass__object*,const char*)) epv->f_queryInt;
  e0->f_isType              = (sidl_bool (*)(struct sidl_BaseClass__object*,
    const char*)) epv->f_isType;
  e0->f_getClassInfo        = (struct sidl_ClassInfo__object* (*)(struct 
    sidl_BaseClass__object*)) epv->f_getClassInfo;

  e1->f__cast               = (void* (*)(void*,const char*)) epv->f__cast;
  e1->f__delete             = (void (*)(void*)) epv->f__delete;
  e1->f__exec               = (void (*)(void*,const char*,
    struct sidl_io_Deserializer__object*,
    struct sidl_io_Serializer__object*)) epv->f__exec;
  e1->f_addRef              = (void (*)(void*)) epv->f_addRef;
  e1->f_deleteRef           = (void (*)(void*)) epv->f_deleteRef;
  e1->f_isSame              = (sidl_bool (*)(void*,
    struct sidl_BaseInterface__object*)) epv->f_isSame;
  e1->f_queryInt            = (struct sidl_BaseInterface__object* (*)(void*,
    const char*)) epv->f_queryInt;
  e1->f_isType              = (sidl_bool (*)(void*,const char*)) epv->f_isType;
  e1->f_getClassInfo        = (struct sidl_ClassInfo__object* (*)(void*)) 
    epv->f_getClassInfo;

  e2->f__cast               = (void* (*)(void*,const char*)) epv->f__cast;
  e2->f__delete             = (void (*)(void*)) epv->f__delete;
  e2->f__exec               = (void (*)(void*,const char*,
    struct sidl_io_Deserializer__object*,
    struct sidl_io_Serializer__object*)) epv->f__exec;
  e2->f_addRef              = (void (*)(void*)) epv->f_addRef;
  e2->f_deleteRef           = (void (*)(void*)) epv->f_deleteRef;
  e2->f_isSame              = (sidl_bool (*)(void*,
    struct sidl_BaseInterface__object*)) epv->f_isSame;
  e2->f_queryInt            = (struct sidl_BaseInterface__object* (*)(void*,
    const char*)) epv->f_queryInt;
  e2->f_isType              = (sidl_bool (*)(void*,const char*)) epv->f_isType;
  e2->f_getClassInfo        = (struct sidl_ClassInfo__object* (*)(void*)) 
    epv->f_getClassInfo;
  e2->f_flush               = (void (*)(void*)) epv->f_flush;
  e2->f_write               = (int32_t (*)(void*,struct sidl_char__array*,
    struct sidl_BaseInterface__object **)) epv->f_write;
  e2->f_putBool             = (void (*)(void*,sidl_bool,
    struct sidl_BaseInterface__object **)) epv->f_putBool;
  e2->f_putChar             = (void (*)(void*,char,
    struct sidl_BaseInterface__object **)) epv->f_putChar;
  e2->f_putInt              = (void (*)(void*,int32_t,
    struct sidl_BaseInterface__object **)) epv->f_putInt;
  e2->f_putLong             = (void (*)(void*,int64_t,
    struct sidl_BaseInterface__object **)) epv->f_putLong;
  e2->f_putFloat            = (void (*)(void*,float,
    struct sidl_BaseInterface__object **)) epv->f_putFloat;
  e2->f_putDouble           = (void (*)(void*,double,
    struct sidl_BaseInterface__object **)) epv->f_putDouble;
  e2->f_putFcomplex         = (void (*)(void*,struct sidl_fcomplex,
    struct sidl_BaseInterface__object **)) epv->f_putFcomplex;
  e2->f_putDcomplex         = (void (*)(void*,struct sidl_dcomplex,
    struct sidl_BaseInterface__object **)) epv->f_putDcomplex;
  e2->f_putString           = (void (*)(void*,const char*,
    struct sidl_BaseInterface__object **)) epv->f_putString;

  s_method_initialized = 1;
  ior_sidlx_io_TxtOStream__ensure_load_called();
}

/*
 * SUPER: return's parent's non-overrided EPV
 */

static struct sidl_BaseClass__epv* sidlx_io_TxtOStream__super(void) {
  return s_old_epv__sidl_baseclass;
}

/*
 * initClassInfo: create a ClassInfo interface if necessary.
 */

static void
initClassInfo(sidl_ClassInfo *info)
{
  LOCK_STATIC_GLOBALS;
  if (s_classInfo_init) {
    sidl_ClassInfoI impl;
    s_classInfo_init = 0;
    impl = sidl_ClassInfoI__create();
    s_classInfo = sidl_ClassInfo__cast(impl);
    if (impl) {
      sidl_ClassInfoI_setName(impl, "sidlx.io.TxtOStream");
      sidl_ClassInfoI_setIORVersion(impl, s_IOR_MAJOR_VERSION,
        s_IOR_MINOR_VERSION);
    }
  }
  if (s_classInfo) {
    if (*info) {
      sidl_ClassInfo_deleteRef(*info);
    }
    *info = s_classInfo;
    sidl_ClassInfo_addRef(*info);
  }
UNLOCK_STATIC_GLOBALS;
}

/*
 * initMetadata: store IOR version & class in sidl.BaseClass's data
 */

static void
initMetadata(struct sidlx_io_TxtOStream__object* self)
{
  if (self) {
    struct sidl_BaseClass__data *data = 
      sidl_BaseClass__get_data(sidl_BaseClass__cast(self));
    if (data) {
      data->d_IOR_major_version = s_IOR_MAJOR_VERSION;
      data->d_IOR_minor_version = s_IOR_MINOR_VERSION;
      initClassInfo(&(data->d_classinfo));
    }
  }
}

/*
 * NEW: allocate object and initialize it.
 */

struct sidlx_io_TxtOStream__object*
sidlx_io_TxtOStream__new(void)
{
  struct sidlx_io_TxtOStream__object* self =
    (struct sidlx_io_TxtOStream__object*) malloc(
      sizeof(struct sidlx_io_TxtOStream__object));
  sidlx_io_TxtOStream__init(self);
  initMetadata(self);
  return self;
}

/*
 * INIT: initialize a new instance of the class object.
 */

void sidlx_io_TxtOStream__init(
  struct sidlx_io_TxtOStream__object* self)
{
  struct sidlx_io_TxtOStream__object* s0 = self;
  struct sidl_BaseClass__object*      s1 = &s0->d_sidl_baseclass;

  sidl_BaseClass__init(s1);

  LOCK_STATIC_GLOBALS;
  if (!s_method_initialized) {
    sidlx_io_TxtOStream__init_epv(s0);
  }
  UNLOCK_STATIC_GLOBALS;

  s1->d_sidl_baseinterface.d_epv = &s_new_epv__sidl_baseinterface;
  s1->d_epv                      = &s_new_epv__sidl_baseclass;

  s0->d_sidlx_io_ostream.d_epv = &s_new_epv__sidlx_io_ostream;
  s0->d_epv                    = &s_new_epv__sidlx_io_txtostream;

  s0->d_sidlx_io_ostream.d_object = self;

  s0->d_data = NULL;


  (*(self->d_epv->f__ctor))(self);
}

/*
 * FINI: deallocate a class instance (destructor).
 */

void sidlx_io_TxtOStream__fini(
  struct sidlx_io_TxtOStream__object* self)
{
  struct sidlx_io_TxtOStream__object* s0 = self;
  struct sidl_BaseClass__object*      s1 = &s0->d_sidl_baseclass;

  (*(s0->d_epv->f__dtor))(s0);

  s1->d_sidl_baseinterface.d_epv = s_old_epv__sidl_baseinterface;
  s1->d_epv                      = s_old_epv__sidl_baseclass;

  sidl_BaseClass__fini(s1);
}

/*
 * VERSION: Return the version of the IOR used to generate this IOR.
 */

void
sidlx_io_TxtOStream__IOR_version(int32_t *major, int32_t *minor)
{
  *major = s_IOR_MAJOR_VERSION;
  *minor = s_IOR_MINOR_VERSION;
}

static const struct sidlx_io_TxtOStream__external
s_externalEntryPoints = {
  sidlx_io_TxtOStream__new,
  sidlx_io_TxtOStream__super
};

/*
 * This function returns a pointer to a static structure of
 * pointers to function entry points.  Its purpose is to provide
 * one-stop shopping for loading DLLs.
 */

const struct sidlx_io_TxtOStream__external*
sidlx_io_TxtOStream__externals(void)
{
  return &s_externalEntryPoints;
}
