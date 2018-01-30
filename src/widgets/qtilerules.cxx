//  header block begin
// /usr/include/qt/QtWidgets/qdrawutil.h
#include <qdrawutil.h>
#include <QtWidgets>

// QTileRules is pure virtual: false
// QTileRules has virtual projected: false
//  header block end

//  main block begin

class MyQTileRules : public QTileRules {
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
extern "C"
void* C_ZN10QTileRulesC2EN2Qt8TileRuleES1_(Qt::TileRule horizontalRule, Qt::TileRule verticalRule) {
  return  new QTileRules(horizontalRule, verticalRule);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:116
// [-2] void QTileRules(Qt::TileRule)
extern "C"
void* C_ZN10QTileRulesC2EN2Qt8TileRuleE(Qt::TileRule rule) {
  return  new QTileRules(rule);
}
//  main block end
