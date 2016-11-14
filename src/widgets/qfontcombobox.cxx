// /usr/include/qt/QtWidgets/qfontcombobox.h
#include <qfontcombobox.h>
#include <QtWidgets>

// virtual
// /usr/include/qt/QtWidgets/qfontcombobox.h:55
// const QMetaObject * metaObject()
extern "C"
void C_ZNK13QFontComboBox10metaObjectEv(void *this_) {
  /*return*/ ((QFontComboBox*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qfontcombobox.h:62
// void QFontComboBox(class QWidget *)
extern "C"
void* C_ZN13QFontComboBoxC1EP7QWidget(QWidget * parent) {
  return new QFontComboBox(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qfontcombobox.h:63
// void ~QFontComboBox()
extern "C"
void C_ZN13QFontComboBoxD1Ev(void *this_) {
  delete (QFontComboBox*)(this_);
}
// /usr/include/qt/QtWidgets/qfontcombobox.h:65
// void setWritingSystem(class QFontDatabase::WritingSystem)
extern "C"
void C_ZN13QFontComboBox16setWritingSystemEN13QFontDatabase13WritingSystemE(void *this_, QFontDatabase::WritingSystem a0) {
  ((QFontComboBox*)this_)->setWritingSystem(a0);
}
// /usr/include/qt/QtWidgets/qfontcombobox.h:66
// QFontDatabase::WritingSystem writingSystem()
extern "C"
void C_ZNK13QFontComboBox13writingSystemEv(void *this_) {
  /*return*/ ((QFontComboBox*)this_)->writingSystem();
}
// /usr/include/qt/QtWidgets/qfontcombobox.h:77
// void setFontFilters(FontFilters)
extern "C"
void C_ZN13QFontComboBox14setFontFiltersE6QFlagsINS_10FontFilterEE(void *this_, QFlags<QFontComboBox::FontFilter> filters) {
  ((QFontComboBox*)this_)->setFontFilters(filters);
}
// /usr/include/qt/QtWidgets/qfontcombobox.h:78
// FontFilters fontFilters()
extern "C"
void C_ZNK13QFontComboBox11fontFiltersEv(void *this_) {
  /*return*/ ((QFontComboBox*)this_)->fontFilters();
}
// /usr/include/qt/QtWidgets/qfontcombobox.h:80
// QFont currentFont()
extern "C"
void C_ZNK13QFontComboBox11currentFontEv(void *this_) {
  /*return*/ ((QFontComboBox*)this_)->currentFont();
}
// virtual
// /usr/include/qt/QtWidgets/qfontcombobox.h:81
// QSize sizeHint()
extern "C"
void C_ZNK13QFontComboBox8sizeHintEv(void *this_) {
  /*return*/ ((QFontComboBox*)this_)->sizeHint();
}
// /usr/include/qt/QtWidgets/qfontcombobox.h:84
// void setCurrentFont(const class QFont &)
extern "C"
void C_ZN13QFontComboBox14setCurrentFontERK5QFont(void *this_, const QFont & f) {
  ((QFontComboBox*)this_)->setCurrentFont(f);
}
// /usr/include/qt/QtWidgets/qfontcombobox.h:87
// void currentFontChanged(const class QFont &)
extern "C"
void C_ZN13QFontComboBox18currentFontChangedERK5QFont(void *this_, const QFont & f) {
  ((QFontComboBox*)this_)->currentFontChanged(f);
}