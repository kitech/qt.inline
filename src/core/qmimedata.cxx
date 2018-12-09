//  header block begin

// /usr/include/qt/QtCore/qmimedata.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmimedata.h>
#include <QtCore>
#include "callback_inherit.h"

// QMimeData is pure virtual: false
// QMimeData has virtual projected: true
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMimeData_t {
  QByteArrayData data[1];
  char stringdata0[12];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMimeData_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMimeData_t qt_meta_stringdata_MyQMimeData = {
   {
  QT_MOC_LITERAL(0, 0, 11), // "MyQMimeData"
  },
  "MyQMimeData"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMimeData[] = {
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
class Q_DECL_EXPORT MyQMimeData : public QMimeData {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QMimeData::staticMetaObject,
  qt_meta_stringdata_MyQMimeData.data,
  qt_meta_data_MyQMimeData,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQMimeData.stringdata0))
      return static_cast<void*>(this);
  return QMimeData::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QMimeData::qt_metacall(_c, _id, _a);
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
  virtual ~MyQMimeData() {}
// void QMimeData()
MyQMimeData() : QMimeData() {}
// Protected virtual Visibility=Default Availability=Available
// [16] QVariant retrieveData(const QString &, QVariant::Type)
  virtual QVariant retrieveData(const QString & mimetype, QVariant::Type preferredType) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"retrieveData", &handled, 2, (uint64_t)&mimetype, (uint64_t)preferredType, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QVariant){};}
    auto prv = (QVariant*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QVariant
    } else {
    return QMimeData::retrieveData(mimetype, preferredType);
  }
  }

};

extern "C" Q_DECL_EXPORT
void* C_QMimeData_init_staticMetaObject(void* this_, void* strdat, void* dat, void* smcfn, void* mcastfn, void* mcallfn) {
  MyQMimeData* qo = (MyQMimeData*)(this_);
  QMetaObject* qmo = &qo->staticMetaObject;
  qmo->d.stringdata = decltype(qmo->d.stringdata)(strdat);
  qmo->d.data = decltype(qmo->d.data)(dat);
  qmo->d.static_metacall = decltype(qmo->d.static_metacall)(smcfn);
  qo->qt_metacast_fnptr = decltype(qo->qt_metacast_fnptr)(mcastfn);
  qo->qt_metacall_fnptr = decltype(qo->qt_metacall_fnptr)( mcallfn);
  return qmo;
}

// Protected virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:88
// [16] QVariant retrieveData(const QString &, QVariant::Type)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeData12retrieveDataERK7QStringN8QVariant4TypeE(void *this_, QString* mimetype, QVariant::Type preferredType) {
  auto rv = ((QMimeData*)this_)->QMimeData::retrieveData(*mimetype, preferredType);
return new QVariant(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:54
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeData10metaObjectEv(void *this_) {
  return (void*)((QMimeData*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:54
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN9QMimeData11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QMimeData*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:54
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN9QMimeData11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QMimeData*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:54
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QMimeData2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMimeData::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:54
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN9QMimeData6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QMimeData::trUtf8(s, c, n);
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:56
// [-2] void QMimeData()
extern "C" Q_DECL_EXPORT
void* C_ZN9QMimeDataC2Ev() {
  auto _nilp = (MyQMimeData*)(0);
  return  new MyQMimeData();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:57
// [-2] void ~QMimeData()
extern "C" Q_DECL_EXPORT
void C_ZN9QMimeDataD2Ev(void *this_) {
  delete (QMimeData*)(this_);
}
// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:59
// [-2] QList<QUrl> urls()
extern "C" Q_DECL_EXPORT
QList<QUrl>* C_ZNK9QMimeData4urlsEv(void *this_) {
  auto rv = ((QMimeData*)this_)->urls();
return new QList<QUrl>(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:60
// [-2] void setUrls(const QList<QUrl> &)
extern "C" Q_DECL_EXPORT
void C_ZN9QMimeData7setUrlsERK5QListI4QUrlE(void *this_, QList<QUrl>* urls) {
  ((QMimeData*)this_)->setUrls(*urls);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:61
// [1] bool hasUrls()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMimeData7hasUrlsEv(void *this_) {
  return (bool)((QMimeData*)this_)->hasUrls();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:63
// [8] QString text()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeData4textEv(void *this_) {
  auto rv = ((QMimeData*)this_)->text();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:64
// [-2] void setText(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QMimeData7setTextERK7QString(void *this_, QString* text) {
  ((QMimeData*)this_)->setText(*text);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:65
// [1] bool hasText()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMimeData7hasTextEv(void *this_) {
  return (bool)((QMimeData*)this_)->hasText();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:67
// [8] QString html()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeData4htmlEv(void *this_) {
  auto rv = ((QMimeData*)this_)->html();
return new QString(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:68
// [-2] void setHtml(const QString &)
extern "C" Q_DECL_EXPORT
void C_ZN9QMimeData7setHtmlERK7QString(void *this_, QString* html) {
  ((QMimeData*)this_)->setHtml(*html);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:69
// [1] bool hasHtml()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMimeData7hasHtmlEv(void *this_) {
  return (bool)((QMimeData*)this_)->hasHtml();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:71
// [16] QVariant imageData()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeData9imageDataEv(void *this_) {
  auto rv = ((QMimeData*)this_)->imageData();
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:72
// [-2] void setImageData(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN9QMimeData12setImageDataERK8QVariant(void *this_, QVariant* image) {
  ((QMimeData*)this_)->setImageData(*image);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:73
// [1] bool hasImage()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMimeData8hasImageEv(void *this_) {
  return (bool)((QMimeData*)this_)->hasImage();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:75
// [16] QVariant colorData()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeData9colorDataEv(void *this_) {
  auto rv = ((QMimeData*)this_)->colorData();
return new QVariant(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:76
// [-2] void setColorData(const QVariant &)
extern "C" Q_DECL_EXPORT
void C_ZN9QMimeData12setColorDataERK8QVariant(void *this_, QVariant* color) {
  ((QMimeData*)this_)->setColorData(*color);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:77
// [1] bool hasColor()
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMimeData8hasColorEv(void *this_) {
  return (bool)((QMimeData*)this_)->hasColor();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:79
// [8] QByteArray data(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeData4dataERK7QString(void *this_, QString* mimetype) {
  auto rv = ((QMimeData*)this_)->data(*mimetype);
return new QByteArray(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:80
// [-2] void setData(const QString &, const QByteArray &)
extern "C" Q_DECL_EXPORT
void C_ZN9QMimeData7setDataERK7QStringRK10QByteArray(void *this_, QString* mimetype, QByteArray* data) {
  ((QMimeData*)this_)->setData(*mimetype, *data);
}

// Public Visibility=Default Availability=Available
// since 4.4
// /usr/include/qt/QtCore/qmimedata.h:81
// [-2] void removeFormat(const QString &)
#if QT_VERSION >= 0x040400
extern "C" Q_DECL_EXPORT
void C_ZN9QMimeData12removeFormatERK7QString(void *this_, QString* mimetype) {
  ((QMimeData*)this_)->removeFormat(*mimetype);
}
#endif // QT_VERSION >= 0x040400

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:83
// [1] bool hasFormat(const QString &)
extern "C" Q_DECL_EXPORT
bool C_ZNK9QMimeData9hasFormatERK7QString(void *this_, QString* mimetype) {
  return (bool)((QMimeData*)this_)->hasFormat(*mimetype);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:84
// [8] QStringList formats()
extern "C" Q_DECL_EXPORT
void* C_ZNK9QMimeData7formatsEv(void *this_) {
  auto rv = ((QMimeData*)this_)->formats();
return new QStringList(rv);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtCore/qmimedata.h:86
// [-2] void clear()
extern "C" Q_DECL_EXPORT
void C_ZN9QMimeData5clearEv(void *this_) {
  ((QMimeData*)this_)->clear();
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
