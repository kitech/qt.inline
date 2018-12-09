//  header block begin

// since 0x040600
// /usr/include/qt/QtWidgets/qdrawutil.h
#ifndef protected
#define protected public
#define private public
#endif
#include <qdrawutil.h>
#include <QtWidgets>
#include "callback_inherit.h"

// QTileRules is pure virtual: false
// QTileRules has virtual projected: false
//  header block end

//  main block begin


struct qt_meta_stringdata_MyQTileRules_t {
  QByteArrayData data[1];
  char stringdata0[13];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
  Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
  qptrdiff(offsetof(qt_meta_stringdata_MyQTileRules_t, stringdata0) + ofs \
  - idx * sizeof(QByteArrayData)) \
  )
static const qt_meta_stringdata_MyQTileRules_t qt_meta_stringdata_MyQTileRules = {
   {
  QT_MOC_LITERAL(0, 0, 12), // "MyQTileRules"
  },
  "MyQTileRules"
};
#undef QT_MOC_LITERAL
static const uint qt_meta_data_MyQTileRules[] = {
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
class Q_DECL_EXPORT MyQTileRules : public QTileRules {
public:
  virtual ~MyQTileRules() {}
// void QTileRules(Qt::TileRule, Qt::TileRule)
MyQTileRules(Qt::TileRule horizontalRule, Qt::TileRule verticalRule) : QTileRules(horizontalRule, verticalRule) {}
// void QTileRules(Qt::TileRule)
MyQTileRules(Qt::TileRule rule) : QTileRules(rule) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:114
// [-2] void QTileRules(Qt::TileRule, Qt::TileRule)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTileRulesC2EN2Qt8TileRuleES1_(Qt::TileRule horizontalRule, Qt::TileRule verticalRule) {
  return  new QTileRules(horizontalRule, verticalRule);
}

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:116
// [-2] void QTileRules(Qt::TileRule)
extern "C" Q_DECL_EXPORT
void* C_ZN10QTileRulesC2EN2Qt8TileRuleE(Qt::TileRule rule) {
  return  new QTileRules(rule);
}


extern "C" Q_DECL_EXPORT
void C_ZN10QTileRulesD2Ev(void *this_) {
  delete (QTileRules*)(this_);
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
