//  header block begin

// /usr/include/qt/QtQuick/qsgtexture.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qsgtexture.h>
#include <QtQuick>
#include "callback_inherit.h"

// QSGTexture is pure virtual: true
// QSGTexture has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQSGTexture_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQSGTexture_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQSGTexture_t qt_meta_stringdata_MyQSGTexture = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQSGTexture"
  },
  "MyQSGTexture"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQSGTexture[] = {
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
class Q_DECL_EXPORT MyQSGTexture : public QSGTexture {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QSGTexture::staticMetaObject,
  qt_meta_stringdata_MyQSGTexture.data,
  qt_meta_data_MyQSGTexture,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQSGTexture.stringdata0))
      return static_cast<void*>(this);
  return QSGTexture::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QSGTexture::qt_metacall(_c, _id, _a);
   if (_id < 0 ) return _id;
   if (qt_metacall_fnptr != 0) {
      return qt_metacall_fnptr(this, _c, _id, _a);
   }
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
  void* (*qt_metacast_fnptr)(void*, char*) = nullptr;
  int (*qt_metacall_fnptr)(QObject *, QMetaObject::Call, int, void **) = nullptr;
public:
  virtual ~MyQSGTexture() {}
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
    // QSGTexture::bind();
  }
  }

// void QSGTexture()
MyQSGTexture() : QSGTexture() {}
};

extern "C" Q_DECL_EXPORT
void* C_QSGTexture_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQSGTexture* qo = (MyQSGTexture*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

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
// /usr/include/qt/QtQuick/qsgtexture.h:52
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSGTexture10metaObjectEv(void *this_) {
  return (void*)((QSGTexture*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:52
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSGTexture11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QSGTexture*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:52
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN10QSGTexture11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QSGTexture*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:52
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSGTexture2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSGTexture::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:52
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN10QSGTexture6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QSGTexture::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:56
// [-2] void QSGTexture()
extern "C" Q_DECL_EXPORT
void* C_ZN10QSGTextureC2Ev() {
  return  new MyQSGTexture();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:57
// [-2] void ~QSGTexture()
extern "C" Q_DECL_EXPORT
void C_ZN10QSGTextureD2Ev(void *this_) {
  delete (QSGTexture*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:79
// [4] int textureId()
extern "C" Q_DECL_EXPORT
int C_ZNK10QSGTexture9textureIdEv(void *this_) {
  return (int)((QSGTexture*)this_)->textureId();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:80
// [8] QSize textureSize()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSGTexture11textureSizeEv(void *this_) {
  auto rv = ((QSGTexture*)this_)->textureSize();
return new QSize(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:81
// [1] bool hasAlphaChannel()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QSGTexture15hasAlphaChannelEv(void *this_) {
  return (bool)((QSGTexture*)this_)->hasAlphaChannel();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:82
// [1] bool hasMipmaps()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QSGTexture10hasMipmapsEv(void *this_) {
  return (bool)((QSGTexture*)this_)->hasMipmaps();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:84
// [32] QRectF normalizedTextureSubRect()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSGTexture24normalizedTextureSubRectEv(void *this_) {
  auto rv = ((QSGTexture*)this_)->normalizedTextureSubRect();
return new QRectF(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:86
// [1] bool isAtlasTexture()
extern "C" Q_DECL_EXPORT
bool C_ZNK10QSGTexture14isAtlasTextureEv(void *this_) {
  return (bool)((QSGTexture*)this_)->isAtlasTexture();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:88
// [8] QSGTexture * removedFromAtlas()
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSGTexture16removedFromAtlasEv(void *this_) {
  return (void*)((QSGTexture*)this_)->removedFromAtlas();
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:90
// [-2] void bind()
extern "C" Q_DECL_EXPORT
void C_ZN10QSGTexture4bindEv(void *this_) {
  ((QSGTexture*)this_)->bind();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:91
// [-2] void updateBindOptions(bool)
extern "C" Q_DECL_EXPORT
void C_ZN10QSGTexture17updateBindOptionsEb(void *this_, bool force) {
  ((QSGTexture*)this_)->updateBindOptions(force);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:93
// [-2] void setMipmapFiltering(QSGTexture::Filtering)
extern "C" Q_DECL_EXPORT
void C_ZN10QSGTexture18setMipmapFilteringENS_9FilteringE(void *this_, QSGTexture::Filtering filter) {
  ((QSGTexture*)this_)->setMipmapFiltering(filter);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:94
// [4] QSGTexture::Filtering mipmapFiltering()
extern "C" Q_DECL_EXPORT
QSGTexture::Filtering C_ZNK10QSGTexture15mipmapFilteringEv(void *this_) {
  return (QSGTexture::Filtering)((QSGTexture*)this_)->mipmapFiltering();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:96
// [-2] void setFiltering(QSGTexture::Filtering)
extern "C" Q_DECL_EXPORT
void C_ZN10QSGTexture12setFilteringENS_9FilteringE(void *this_, QSGTexture::Filtering filter) {
  ((QSGTexture*)this_)->setFiltering(filter);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:97
// [4] QSGTexture::Filtering filtering()
extern "C" Q_DECL_EXPORT
QSGTexture::Filtering C_ZNK10QSGTexture9filteringEv(void *this_) {
  return (QSGTexture::Filtering)((QSGTexture*)this_)->filtering();
}

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtQuick/qsgtexture.h:99
// [-2] void setAnisotropyLevel(QSGTexture::AnisotropyLevel)
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
void C_ZN10QSGTexture18setAnisotropyLevelENS_15AnisotropyLevelE(void *this_, QSGTexture::AnisotropyLevel level) {
  ((QSGTexture*)this_)->setAnisotropyLevel(level);
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// since 5.9
// /usr/include/qt/QtQuick/qsgtexture.h:100
// [4] QSGTexture::AnisotropyLevel anisotropyLevel()
#if QT_VERSION >= 0x050900
extern "C" Q_DECL_EXPORT
QSGTexture::AnisotropyLevel C_ZNK10QSGTexture15anisotropyLevelEv(void *this_) {
  return (QSGTexture::AnisotropyLevel)((QSGTexture*)this_)->anisotropyLevel();
}
#endif // QT_VERSION >= 0x050900

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:102
// [-2] void setHorizontalWrapMode(QSGTexture::WrapMode)
extern "C" Q_DECL_EXPORT
void C_ZN10QSGTexture21setHorizontalWrapModeENS_8WrapModeE(void *this_, QSGTexture::WrapMode hwrap) {
  ((QSGTexture*)this_)->setHorizontalWrapMode(hwrap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:103
// [4] QSGTexture::WrapMode horizontalWrapMode()
extern "C" Q_DECL_EXPORT
QSGTexture::WrapMode C_ZNK10QSGTexture18horizontalWrapModeEv(void *this_) {
  return (QSGTexture::WrapMode)((QSGTexture*)this_)->horizontalWrapMode();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:105
// [-2] void setVerticalWrapMode(QSGTexture::WrapMode)
extern "C" Q_DECL_EXPORT
void C_ZN10QSGTexture19setVerticalWrapModeENS_8WrapModeE(void *this_, QSGTexture::WrapMode vwrap) {
  ((QSGTexture*)this_)->setVerticalWrapMode(vwrap);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:106
// [4] QSGTexture::WrapMode verticalWrapMode()
extern "C" Q_DECL_EXPORT
QSGTexture::WrapMode C_ZNK10QSGTexture16verticalWrapModeEv(void *this_) {
  return (QSGTexture::WrapMode)((QSGTexture*)this_)->verticalWrapMode();
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtQuick/qsgtexture.h:108
// [32] QRectF convertToNormalizedSourceRect(const QRectF &)
extern "C" Q_DECL_EXPORT
void* C_ZNK10QSGTexture29convertToNormalizedSourceRectERK6QRectF(void *this_, QRectF* rect) {
  auto rv = ((QSGTexture*)this_)->convertToNormalizedSourceRect(*rect);
return new QRectF(rv);
}

//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
