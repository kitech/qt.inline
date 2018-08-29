//  header block begin
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qimageencodercontrol.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QImageEncoderControl is pure virtual: true
// QImageEncoderControl has virtual projected: false
//  header block end

//  main block begin

struct qt_meta_stringdata_MyQImageEncoderControl_t {
  QByteArrayData data[1];
  char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQImageEncoderControl_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQImageEncoderControl_t qt_meta_stringdata_MyQImageEncoderControl = {
   {
  QT_MOC_LITERAL(0, 0, 22), // "MyQImageEncoderControl"
  },
  "MyQImageEncoderControl"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQImageEncoderControl[] = {
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
class Q_DECL_EXPORT MyQImageEncoderControl : public QImageEncoderControl {
public: // Q_OBJECT
/*static*/ QMetaObject staticMetaObject = {{&QImageEncoderControl::staticMetaObject,
  qt_meta_stringdata_MyQImageEncoderControl.data,
  qt_meta_data_MyQImageEncoderControl,
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
  if (!strcmp(_clname, qt_meta_stringdata_MyQImageEncoderControl.stringdata0))
      return static_cast<void*>(this);
  return QImageEncoderControl::qt_metacast(_clname);
}
virtual int qt_metacall(QMetaObject::Call _c, int _id, void **_a) override {
   _id = QImageEncoderControl::qt_metacall(_c, _id, _a);
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
  virtual ~MyQImageEncoderControl() {}
// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QStringList supportedImageCodecs()
  virtual QStringList supportedImageCodecs() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedImageCodecs", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QStringList){};}
    auto prv = (QStringList*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QStringList
    } else {
    return (QStringList){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QString imageCodecDescription(const QString &)
  virtual QString imageCodecDescription(const QString & codecName) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"imageCodecDescription", &handled, 1, (uint64_t)&codecName, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QString){};}
    auto prv = (QString*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QString
    } else {
    return (QString){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QList<QSize> supportedResolutions(const QImageEncoderSettings &, bool *)
  virtual QList<QSize> supportedResolutions(const QImageEncoderSettings & settings, bool * continuous) const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"supportedResolutions", &handled, 2, (uint64_t)&settings, (uint64_t)continuous, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QList<QSize>){};}
    auto prv = (QList<QSize>*)(irv); auto orv = *prv; delete(prv); return orv;
      // Unexposed Record QList<QSize>
    } else {
    return (QList<QSize>){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [8] QImageEncoderSettings imageSettings()
  virtual QImageEncoderSettings imageSettings() const override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"imageSettings", &handled, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
    if (irv == 0) { return (QImageEncoderSettings){};}
    auto prv = (QImageEncoderSettings*)(irv); auto orv = *prv; delete(prv); return orv;
      // Record Record QImageEncoderSettings
    } else {
    return (QImageEncoderSettings){};
  }
  }

// Public purevirtual virtual Visibility=Default Availability=Available
// [-2] void setImageSettings(const QImageEncoderSettings &)
  virtual void setImageSettings(const QImageEncoderSettings & settings)  override {
    int handled = 0;
    auto irv = callbackAllInherits_fnptr((void*)this, (char*)"setImageSettings", &handled, 1, (uint64_t)&settings, 0, 0, 0, 0, 0, 0, 0, 0, 0);
    if (handled) {
      // Void Void void
    } else {
    // QImageEncoderControl::setImageSettings(settings);
  }
  }

};
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:67
// [8] QStringList supportedImageCodecs()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:68
// [8] QString imageCodecDescription(const QString &)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:70
// [8] QList<QSize> supportedResolutions(const QImageEncoderSettings &, bool *)
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:73
// [8] QImageEncoderSettings imageSettings()
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:74
// [-2] void setImageSettings(const QImageEncoderSettings &)
// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:62
// [8] const QMetaObject * metaObject()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QImageEncoderControl10metaObjectEv(void *this_) {
  return (void*)((QImageEncoderControl*)this_)->metaObject();
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:62
// [8] void * qt_metacast(const char *)
extern "C" Q_DECL_EXPORT
void* C_ZN20QImageEncoderControl11qt_metacastEPKc(void *this_, const char * arg0) {
  return (void*)((QImageEncoderControl*)this_)->qt_metacast(arg0);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:62
// [4] int qt_metacall(QMetaObject::Call, int, void **)
extern "C" Q_DECL_EXPORT
int C_ZN20QImageEncoderControl11qt_metacallEN11QMetaObject4CallEiPPv(void *this_, QMetaObject::Call arg0, int arg1, void ** arg2) {
  return (int)((QImageEncoderControl*)this_)->qt_metacall(arg0, arg1, arg2);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:62
// [8] QString tr(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QImageEncoderControl2trEPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QImageEncoderControl::tr(s, c, n);
return new QString(rv);
}

// Public static inline Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:62
// [8] QString trUtf8(const char *, const char *, int)
extern "C" Q_DECL_EXPORT
void* C_ZN20QImageEncoderControl6trUtf8EPKcS1_i(const char * s, const char * c, int n) {
  auto rv = QImageEncoderControl::trUtf8(s, c, n);
return new QString(rv);
}

// Public virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:65
// [-2] void ~QImageEncoderControl()
extern "C" Q_DECL_EXPORT
void C_ZN20QImageEncoderControlD2Ev(void *this_) {
  delete (QImageEncoderControl*)(this_);
}
// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:67
// [8] QStringList supportedImageCodecs()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QImageEncoderControl20supportedImageCodecsEv(void *this_) {
  auto rv = ((QImageEncoderControl*)this_)->supportedImageCodecs();
return new QStringList(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:68
// [8] QString imageCodecDescription(const QString &)
extern "C" Q_DECL_EXPORT
void* C_ZNK20QImageEncoderControl21imageCodecDescriptionERK7QString(void *this_, QString* codecName) {
  auto rv = ((QImageEncoderControl*)this_)->imageCodecDescription(*codecName);
return new QString(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:70
// [8] QList<QSize> supportedResolutions(const QImageEncoderSettings &, bool *)
extern "C" Q_DECL_EXPORT
QList<QSize>* C_ZNK20QImageEncoderControl20supportedResolutionsERK21QImageEncoderSettingsPb(void *this_, QImageEncoderSettings* settings, bool * continuous) {
  auto rv = ((QImageEncoderControl*)this_)->supportedResolutions(*settings, continuous);
return new QList<QSize>(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:73
// [8] QImageEncoderSettings imageSettings()
extern "C" Q_DECL_EXPORT
void* C_ZNK20QImageEncoderControl13imageSettingsEv(void *this_) {
  auto rv = ((QImageEncoderControl*)this_)->imageSettings();
return new QImageEncoderSettings(rv);
}

// Public purevirtual virtual Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qimageencodercontrol.h:74
// [-2] void setImageSettings(const QImageEncoderSettings &)
extern "C" Q_DECL_EXPORT
void C_ZN20QImageEncoderControl16setImageSettingsERK21QImageEncoderSettings(void *this_, QImageEncoderSettings* settings) {
  ((QImageEncoderControl*)this_)->setImageSettings(*settings);
}

//  main block end
