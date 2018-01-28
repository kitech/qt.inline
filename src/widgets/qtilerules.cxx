//  header block begin
// /usr/include/qt/QtWidgets/qdrawutil.h
#include <qdrawutil.h>
#include <QtWidgets>

// QTileRules is pure virtual: false
//  header block end

//  main block begin

class MyQTileRules : public QTileRules {
public:
MyQTileRules(Qt::TileRule horizontalRule, Qt::TileRule verticalRule) : QTileRules(horizontalRule, verticalRule) {}
MyQTileRules(Qt::TileRule rule) : QTileRules(rule) {}
};

// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:114
// [-2] void QTileRules(Qt::TileRule, Qt::TileRule)
extern "C"
void* C_ZN10QTileRulesC1EN2Qt8TileRuleES1_(Qt::TileRule horizontalRule, Qt::TileRule verticalRule) {
  (MyQTileRules*)(0);
  return  new MyQTileRules(horizontalRule, verticalRule);
}
// Public inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:116
// [-2] void QTileRules(Qt::TileRule)
extern "C"
void* C_ZN10QTileRulesC1EN2Qt8TileRuleE(Qt::TileRule rule) {
  (MyQTileRules*)(0);
  return  new MyQTileRules(rule);
}
//  main block end
