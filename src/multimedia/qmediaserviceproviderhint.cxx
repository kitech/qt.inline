//  header block begin

// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qmediaserviceproviderplugin.h>
#include <QtMultimedia>
#include "callback_inherit.h"

// QMediaServiceProviderHint is pure virtual: false false
// QMediaServiceProviderHint has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQMediaServiceProviderHint_t {
  QByteArrayData data[1];
  char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQMediaServiceProviderHint_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQMediaServiceProviderHint_t qt_meta_stringdata_MyQMediaServiceProviderHint = {
   {
  QT_MOC_LITERAL(0, 0, 27), // "MyQMediaServiceProviderHint"
  },
  "MyQMediaServiceProviderHint"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQMediaServiceProviderHint[] = {
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
class Q_DECL_EXPORT MyQMediaServiceProviderHint : public QMediaServiceProviderHint {
public:
  virtual ~MyQMediaServiceProviderHint() {}
// void QMediaServiceProviderHint()
MyQMediaServiceProviderHint() : QMediaServiceProviderHint() {}
// void QMediaServiceProviderHint(const QString &, const QStringList &)
MyQMediaServiceProviderHint(const QString & mimeType, const QStringList & codecs) : QMediaServiceProviderHint(mimeType, codecs) {}
// void QMediaServiceProviderHint(const QByteArray &)
MyQMediaServiceProviderHint(const QByteArray & device) : QMediaServiceProviderHint(device) {}
// void QMediaServiceProviderHint(QCamera::Position)
MyQMediaServiceProviderHint(QCamera::Position position) : QMediaServiceProviderHint(position) {}
// void QMediaServiceProviderHint(QMediaServiceProviderHint::Features)
MyQMediaServiceProviderHint(QFlags<QMediaServiceProviderHint::Feature> features) : QMediaServiceProviderHint(features) {}
// void QMediaServiceProviderHint(const QMediaServiceProviderHint &)
MyQMediaServiceProviderHint(const QMediaServiceProviderHint & other) : QMediaServiceProviderHint(other) {}
};

extern "C" // Q_DECL_EXPORT
uint64_t ensure_inline_symbol_qmediaserviceproviderhint(void* this_) {
  uint64_t fnptrsumval = 0;

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:74
// [-2] void QMediaServiceProviderHint() 
// (12)qm1242613506 (34)_ZN25QMediaServiceProviderHintC2Ev
/*void* qm1242613506()*/{
  ;
  this_ =  new QMediaServiceProviderHint();
  this_ =  new MyQMediaServiceProviderHint();
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:75
// [-2] void QMediaServiceProviderHint(const QString &, const QStringList &) 
// (12)qm3481904707 (58)_ZN25QMediaServiceProviderHintC2ERK7QStringRK11QStringList
/*void* qm3481904707(const QString & mimeType, const QStringList & codecs)*/{
  const QString & mimeType = *(const QString *)this_; const QStringList & codecs = *(const QStringList *)this_;
  this_ =  new QMediaServiceProviderHint(mimeType, codecs);
  this_ =  new MyQMediaServiceProviderHint(mimeType, codecs);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:76
// [-2] void QMediaServiceProviderHint(const QByteArray &) 
// (12)qm3058461051 (47)_ZN25QMediaServiceProviderHintC2ERK10QByteArray
/*void* qm3058461051(const QByteArray & device)*/{
  const QByteArray & device = *(const QByteArray *)this_;
  this_ =  new QMediaServiceProviderHint(device);
  this_ =  new MyQMediaServiceProviderHint(device);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:77
// [-2] void QMediaServiceProviderHint(QCamera::Position) 
// (11)qm100925434 (52)_ZN25QMediaServiceProviderHintC2EN7QCamera8PositionE
/*void* qm100925434(QCamera::Position position)*/{
  QCamera::Position position = *(QCamera::Position*)this_;
  this_ =  new QMediaServiceProviderHint(position);
  this_ =  new MyQMediaServiceProviderHint(position);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:78
// [-2] void QMediaServiceProviderHint(QMediaServiceProviderHint::Features) 
// (12)qm1848162069 (54)_ZN25QMediaServiceProviderHintC2E6QFlagsINS_7FeatureEE
/*void* qm1848162069(QFlags<QMediaServiceProviderHint::Feature> features)*/{
  QFlags<QMediaServiceProviderHint::Feature> features = *(QFlags<QMediaServiceProviderHint::Feature>*)this_;
  this_ =  new QMediaServiceProviderHint(features);
  this_ =  new MyQMediaServiceProviderHint(features);
}

// Public Visibility=Default Availability=Available
// /usr/include/qt/QtMultimedia/qmediaserviceproviderplugin.h:79
// [-2] void QMediaServiceProviderHint(const QMediaServiceProviderHint &) 
// (12)qm1544832097 (37)_ZN25QMediaServiceProviderHintC2ERKS_
/*void* qm1544832097(const QMediaServiceProviderHint & other)*/{
  const QMediaServiceProviderHint & other = *(const QMediaServiceProviderHint *)this_;
  this_ =  new QMediaServiceProviderHint(other);
  this_ =  new MyQMediaServiceProviderHint(other);
}


/*void C_ZN25QMediaServiceProviderHintD2Ev(void *this_)*/ {
  delete (QMediaServiceProviderHint*)(this_);
}
  return fnptrsumval;
} // end ensure_inline_symbol_qmediaserviceproviderhint
//  main block end

//  use block begin

//  use block end

//  ext block begin

//  ext block end

//  body block begin

//  body block end

//  footer block begin

//  footer block end
