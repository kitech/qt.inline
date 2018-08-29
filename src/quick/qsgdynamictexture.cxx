//  header block begin
// /usr/include/qt/QtQuick/qsgtexture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgtexture.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGDynamicTexture is pure virtual: true
// QSGDynamicTexture has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQSGDynamicTexture_t {
  QByteArrayData data[1];
  char stringdata0[20];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGDynamicTexture_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGDynamicTexture_t qt_meta_stringdata_MyQSGDynamicTexture = {
   {
  QT_MOC_LITERAL(0, 0, 19), // "MyQSGDynamicTexture"
  },
  "MyQSGDynamicTexture"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGDynamicTexture[] = {
  // content:
  7,       // revision
  0,       // classname
  0,   0, // classinfo
  0,   0, // methods
  0,    0, // properties
  0,    0, // enums/sets
  0,    0, // constructors
  0,       // flags
  0,       // signalCount
  0        // eod
};
class Q_DECL_EXPORT MyQSGDynamicTexture : public QSGDynamicTexture {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSGDynamicTexture::staticMetaObject,
  qt_meta_stringdata_MyQSGDynamicTexture.data,
  qt_meta_data_MyQSGDynamicTexture,
  qt_static_metacall, nullptr, nullptr
}};
virtual const QMetaObject *metaObject() const override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"metaObject", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (QMetaObject*)irv; }
  return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject; 
}
virtual void *qt_metacast(const char *_clname) override {
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacast", &handled, 1, (uint64_t)_clname, 0, 0, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (void*)irv; }
  if (!_clname) return nullptr;
  if (!strcmp(_clname, qt_meta_stringdata_MyQSGDynamicTexture.stringdata0))
      return static_cast<void*>(this);
  return QSGDynamicTexture::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSGDynamicTexture::qt_metacall(_c, _id, _a);
   int handled = 0;
   auto irv = callbackAllInherits_fnptr((void*)this, (char*)"qt_metacall", &handled, 3, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0, 0);
   if (handled) { return (int)irv; }
   return _id;
  }
/*static*/ inline QString tr(const char *s, const char *c = nullptr, int n = -1)
{ return staticMetaObject.tr(s, c, n); }
/*static*/ inline QString trUtf8(const char *s, const char *c = nullptr, int n = -1)
 { return staticMetaObject.tr(s, c, n); }
Q_DECL_HIDDEN_STATIC_METACALL static void qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a){
  int handled = 0;
  auto irv = callbackAllInherits_fnptr((void*)_o, (char*)"qt_static_metacall", &handled, 4, (uint64_t)_o, (uint64_t)_c, (uint64_t)_id, (uint64_t)_a, 0, 0, 0, 0, 0, 0);
}
private: struct QPrivateSignal {};

public:
  virtual ~MyQSGDynamicTexture() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool updateTexture()
  virtual bool updateTexture()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"updateTexture", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [4] int textureId()
  virtual int textureId() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"textureId", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (int)(irv);
      // Int Int int
    } else {
    return (int){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QSize textureSize()
  virtual QSize textureSize() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"textureSize", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QSize){};}
    auto prv = (QSize*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QSize
    } else {
    return (QSize){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool hasAlphaChannel()
  virtual bool hasAlphaChannel() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hasAlphaChannel", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [1] bool hasMipmaps()
  virtual bool hasMipmaps() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"hasMipmaps", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    return (bool)(irv);
      // Bool Bool bool
    } else {
    return (bool){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void bind()
  virtual void bind()  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"bind", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QSGDynamicTexture::bind();
  }
  }

};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:133
// [1] bool updateTexture()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:79
// [4] int textureId()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:80
// [8] QSize textureSize()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:81
// [1] bool hasAlphaChannel()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:82
// [1] bool hasMipmaps()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:90
// [-2] void bind()
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:131
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK17QSGDynamicTexture10metaObjectEv(void *this_) {
  return (void*)((QSGDynamicTexture*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:131
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSGDynamicTexture11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSGDynamicTexture*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:131
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN17QSGDynamicTexture11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSGDynamicTexture*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:131
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSGDynamicTexture2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSGDynamicTexture::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:131
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN17QSGDynamicTexture6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSGDynamicTexture::trUtf8(s, c, n);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:133
// [1] bool updateTexture()
extern "C" Q_DECL_EXPORT
bool C_ZN17QSGDynamicTexture13updateTextureEv(void *this_) {
  return (bool)((QSGDynamicTexture*)this_)->updateTexture();
}


extern "C" Q_DECL_EXPORT
void C_ZN17QSGDynamicTextureD2Ev(void *this_) {
  delete (QSGDynamicTexture*)(this_);
}
//  main block end
