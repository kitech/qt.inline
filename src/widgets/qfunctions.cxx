
#include <QtCore>
#include <QtGui>
#include <QtWidgets>
#include "hidden_symbols.h"
//  header block end

//  main block begin
extern "C"
uint64_t ensure_inline_symbol_widgets(void* this_) {
  uint64_t fnptrsumval = 0;

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:342
// [4] QIncompatibleFlag operator|(QTextEdit::AutoFormatting::enum_type, int) 
// (12)qm1701066931 (37)_ZorN9QTextEdit18AutoFormattingFlagEi
/*void qm1701066931_313(QTextEdit::AutoFormattingFlag f1, int f2)*/ {
  QTextEdit::AutoFormattingFlag f1 = *(QTextEdit::AutoFormattingFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QTextEdit::AutoFormattingFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:342
// [4] QFlags<QTextEdit::AutoFormatting::enum_type> operator|(QTextEdit::AutoFormatting::enum_type, QTextEdit::AutoFormatting::enum_type) 
// (12)qm2875009198 (39)_ZorN9QTextEdit18AutoFormattingFlagES0_
/*void qm2875009198_314(QTextEdit::AutoFormattingFlag f1, QTextEdit::AutoFormattingFlag f2)*/ {
  QTextEdit::AutoFormattingFlag f1 = *(QTextEdit::AutoFormattingFlag*)this_; QTextEdit::AutoFormattingFlag f2 = *(QTextEdit::AutoFormattingFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTextEdit::AutoFormattingFlag> (*)(QTextEdit::AutoFormattingFlag, QTextEdit::AutoFormattingFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtextedit.h:342
// [4] QFlags<QTextEdit::AutoFormatting::enum_type> operator|(QTextEdit::AutoFormatting::enum_type, QFlags<QTextEdit::AutoFormatting::enum_type>) 
// (12)qm3709989210 (48)_ZorN9QTextEdit18AutoFormattingFlagE6QFlagsIS0_E
/*void qm3709989210_315(QTextEdit::AutoFormattingFlag f1, QFlags<QTextEdit::AutoFormattingFlag> f2)*/ {
  QTextEdit::AutoFormattingFlag f1 = *(QTextEdit::AutoFormattingFlag*)this_; QFlags<QTextEdit::AutoFormattingFlag> f2 = *(QFlags<QTextEdit::AutoFormattingFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTextEdit::AutoFormattingFlag> (*)(QTextEdit::AutoFormattingFlag, QFlags<QTextEdit::AutoFormattingFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:169
// [4] QIncompatibleFlag operator|(QMdiArea::AreaOptions::enum_type, int) 
// (12)qm1060482306 (28)_ZorN8QMdiArea10AreaOptionEi
/*void qm1060482306_316(QMdiArea::AreaOption f1, int f2)*/ {
  QMdiArea::AreaOption f1 = *(QMdiArea::AreaOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QMdiArea::AreaOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:169
// [4] QFlags<QMdiArea::AreaOptions::enum_type> operator|(QMdiArea::AreaOptions::enum_type, QMdiArea::AreaOptions::enum_type) 
// (12)qm3605433037 (30)_ZorN8QMdiArea10AreaOptionES0_
/*void qm3605433037_317(QMdiArea::AreaOption f1, QMdiArea::AreaOption f2)*/ {
  QMdiArea::AreaOption f1 = *(QMdiArea::AreaOption*)this_; QMdiArea::AreaOption f2 = *(QMdiArea::AreaOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QMdiArea::AreaOption> (*)(QMdiArea::AreaOption, QMdiArea::AreaOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdiarea.h:169
// [4] QFlags<QMdiArea::AreaOptions::enum_type> operator|(QMdiArea::AreaOptions::enum_type, QFlags<QMdiArea::AreaOptions::enum_type>) 
// (12)qm3312036239 (39)_ZorN8QMdiArea10AreaOptionE6QFlagsIS0_E
/*void qm3312036239_318(QMdiArea::AreaOption f1, QFlags<QMdiArea::AreaOption> f2)*/ {
  QMdiArea::AreaOption f1 = *(QMdiArea::AreaOption*)this_; QFlags<QMdiArea::AreaOption> f2 = *(QFlags<QMdiArea::AreaOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QMdiArea::AreaOption> (*)(QMdiArea::AreaOption, QFlags<QMdiArea::AreaOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:214
// [4] QIncompatibleFlag operator|(QWizard::WizardOptions::enum_type, int) 
// (11)qm497942907 (29)_ZorN7QWizard12WizardOptionEi
/*void qm497942907_319(QWizard::WizardOption f1, int f2)*/ {
  QWizard::WizardOption f1 = *(QWizard::WizardOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QWizard::WizardOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:214
// [4] QFlags<QWizard::WizardOptions::enum_type> operator|(QWizard::WizardOptions::enum_type, QWizard::WizardOptions::enum_type) 
// (12)qm4152067370 (31)_ZorN7QWizard12WizardOptionES0_
/*void qm4152067370_320(QWizard::WizardOption f1, QWizard::WizardOption f2)*/ {
  QWizard::WizardOption f1 = *(QWizard::WizardOption*)this_; QWizard::WizardOption f2 = *(QWizard::WizardOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QWizard::WizardOption> (*)(QWizard::WizardOption, QWizard::WizardOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwizard.h:214
// [4] QFlags<QWizard::WizardOptions::enum_type> operator|(QWizard::WizardOptions::enum_type, QFlags<QWizard::WizardOptions::enum_type>) 
// (10)qm15832686 (40)_ZorN7QWizard12WizardOptionE6QFlagsIS0_E
/*void qm15832686_321(QWizard::WizardOption f1, QFlags<QWizard::WizardOption> f2)*/ {
  QWizard::WizardOption f1 = *(QWizard::WizardOption*)this_; QFlags<QWizard::WizardOption> f2 = *(QFlags<QWizard::WizardOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QWizard::WizardOption> (*)(QWizard::WizardOption, QFlags<QWizard::WizardOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:750
// [4] QIncompatibleFlag operator|(QWidget::RenderFlags::enum_type, int) 
// (11)qm767727457 (27)_ZorN7QWidget10RenderFlagEi
/*void qm767727457_322(QWidget::RenderFlag f1, int f2)*/ {
  QWidget::RenderFlag f1 = *(QWidget::RenderFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QWidget::RenderFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:750
// [4] QFlags<QWidget::RenderFlags::enum_type> operator|(QWidget::RenderFlags::enum_type, QWidget::RenderFlags::enum_type) 
// (12)qm1580890604 (29)_ZorN7QWidget10RenderFlagES0_
/*void qm1580890604_323(QWidget::RenderFlag f1, QWidget::RenderFlag f2)*/ {
  QWidget::RenderFlag f1 = *(QWidget::RenderFlag*)this_; QWidget::RenderFlag f2 = *(QWidget::RenderFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QWidget::RenderFlag> (*)(QWidget::RenderFlag, QWidget::RenderFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qwidget.h:750
// [4] QFlags<QWidget::RenderFlags::enum_type> operator|(QWidget::RenderFlags::enum_type, QFlags<QWidget::RenderFlags::enum_type>) 
// (12)qm3213349698 (38)_ZorN7QWidget10RenderFlagE6QFlagsIS0_E
/*void qm3213349698_324(QWidget::RenderFlag f1, QFlags<QWidget::RenderFlag> f2)*/ {
  QWidget::RenderFlag f1 = *(QWidget::RenderFlag*)this_; QFlags<QWidget::RenderFlag> f2 = *(QFlags<QWidget::RenderFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QWidget::RenderFlag> (*)(QWidget::RenderFlag, QFlags<QWidget::RenderFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:893
// [4] QIncompatibleFlag operator|(QStyle::State::enum_type, int) 
// (12)qm1434708749 (24)_ZorN6QStyle9StateFlagEi
/*void qm1434708749_325(QStyle::StateFlag f1, int f2)*/ {
  QStyle::StateFlag f1 = *(QStyle::StateFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QStyle::StateFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:893
// [4] QFlags<QStyle::State::enum_type> operator|(QStyle::State::enum_type, QStyle::State::enum_type) 
// (12)qm3468761105 (26)_ZorN6QStyle9StateFlagES0_
/*void qm3468761105_326(QStyle::StateFlag f1, QStyle::StateFlag f2)*/ {
  QStyle::StateFlag f1 = *(QStyle::StateFlag*)this_; QStyle::StateFlag f2 = *(QStyle::StateFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStyle::StateFlag> (*)(QStyle::StateFlag, QStyle::StateFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:893
// [4] QFlags<QStyle::State::enum_type> operator|(QStyle::State::enum_type, QFlags<QStyle::State::enum_type>) 
// (12)qm3210751946 (35)_ZorN6QStyle9StateFlagE6QFlagsIS0_E
/*void qm3210751946_327(QStyle::StateFlag f1, QFlags<QStyle::StateFlag> f2)*/ {
  QStyle::StateFlag f1 = *(QStyle::StateFlag*)this_; QFlags<QStyle::StateFlag> f2 = *(QFlags<QStyle::StateFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStyle::StateFlag> (*)(QStyle::StateFlag, QFlags<QStyle::StateFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:894
// [4] QIncompatibleFlag operator|(QStyle::SubControls::enum_type, int) 
// (11)qm277555548 (26)_ZorN6QStyle10SubControlEi
/*void qm277555548_328(QStyle::SubControl f1, int f2)*/ {
  QStyle::SubControl f1 = *(QStyle::SubControl*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QStyle::SubControl, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:894
// [4] QFlags<QStyle::SubControls::enum_type> operator|(QStyle::SubControls::enum_type, QStyle::SubControls::enum_type) 
// (11)qm403411600 (28)_ZorN6QStyle10SubControlES0_
/*void qm403411600_329(QStyle::SubControl f1, QStyle::SubControl f2)*/ {
  QStyle::SubControl f1 = *(QStyle::SubControl*)this_; QStyle::SubControl f2 = *(QStyle::SubControl*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStyle::SubControl> (*)(QStyle::SubControl, QStyle::SubControl) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyle.h:894
// [4] QFlags<QStyle::SubControls::enum_type> operator|(QStyle::SubControls::enum_type, QFlags<QStyle::SubControls::enum_type>) 
// (12)qm2696912163 (37)_ZorN6QStyle10SubControlE6QFlagsIS0_E
/*void qm2696912163_330(QStyle::SubControl f1, QFlags<QStyle::SubControl> f2)*/ {
  QStyle::SubControl f1 = *(QStyle::SubControl*)this_; QFlags<QStyle::SubControl> f2 = *(QFlags<QStyle::SubControl>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStyle::SubControl> (*)(QStyle::SubControl, QFlags<QStyle::SubControl>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:146
// [4] QIncompatibleFlag operator|(QTreeWidgetItemIterator::IteratorFlags::enum_type, int) 
// (12)qm2523977656 (46)_ZorN23QTreeWidgetItemIterator12IteratorFlagEi
/*void qm2523977656_331(QTreeWidgetItemIterator::IteratorFlag f1, int f2)*/ {
  QTreeWidgetItemIterator::IteratorFlag f1 = *(QTreeWidgetItemIterator::IteratorFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QTreeWidgetItemIterator::IteratorFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:146
// [4] QFlags<QTreeWidgetItemIterator::IteratorFlags::enum_type> operator|(QTreeWidgetItemIterator::IteratorFlags::enum_type, QTreeWidgetItemIterator::IteratorFlags::enum_type) 
// (12)qm2015165848 (48)_ZorN23QTreeWidgetItemIterator12IteratorFlagES0_
/*void qm2015165848_332(QTreeWidgetItemIterator::IteratorFlag f1, QTreeWidgetItemIterator::IteratorFlag f2)*/ {
  QTreeWidgetItemIterator::IteratorFlag f1 = *(QTreeWidgetItemIterator::IteratorFlag*)this_; QTreeWidgetItemIterator::IteratorFlag f2 = *(QTreeWidgetItemIterator::IteratorFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTreeWidgetItemIterator::IteratorFlag> (*)(QTreeWidgetItemIterator::IteratorFlag, QTreeWidgetItemIterator::IteratorFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qtreewidgetitemiterator.h:146
// [4] QFlags<QTreeWidgetItemIterator::IteratorFlags::enum_type> operator|(QTreeWidgetItemIterator::IteratorFlags::enum_type, QFlags<QTreeWidgetItemIterator::IteratorFlags::enum_type>) 
// (12)qm3089178678 (57)_ZorN23QTreeWidgetItemIterator12IteratorFlagE6QFlagsIS0_E
/*void qm3089178678_333(QTreeWidgetItemIterator::IteratorFlag f1, QFlags<QTreeWidgetItemIterator::IteratorFlag> f2)*/ {
  QTreeWidgetItemIterator::IteratorFlag f1 = *(QTreeWidgetItemIterator::IteratorFlag*)this_; QFlags<QTreeWidgetItemIterator::IteratorFlag> f2 = *(QFlags<QTreeWidgetItemIterator::IteratorFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QTreeWidgetItemIterator::IteratorFlag> (*)(QTreeWidgetItemIterator::IteratorFlag, QFlags<QTreeWidgetItemIterator::IteratorFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:612
// [4] QIncompatibleFlag operator|(QStyleOptionToolButton::ToolButtonFeatures::enum_type, int) 
// (12)qm1408944387 (50)_ZorN22QStyleOptionToolButton17ToolButtonFeatureEi
/*void qm1408944387_334(QStyleOptionToolButton::ToolButtonFeature f1, int f2)*/ {
  QStyleOptionToolButton::ToolButtonFeature f1 = *(QStyleOptionToolButton::ToolButtonFeature*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QStyleOptionToolButton::ToolButtonFeature, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:612
// [4] QFlags<QStyleOptionToolButton::ToolButtonFeatures::enum_type> operator|(QStyleOptionToolButton::ToolButtonFeatures::enum_type, QStyleOptionToolButton::ToolButtonFeatures::enum_type) 
// (12)qm2233627138 (52)_ZorN22QStyleOptionToolButton17ToolButtonFeatureES0_
/*void qm2233627138_335(QStyleOptionToolButton::ToolButtonFeature f1, QStyleOptionToolButton::ToolButtonFeature f2)*/ {
  QStyleOptionToolButton::ToolButtonFeature f1 = *(QStyleOptionToolButton::ToolButtonFeature*)this_; QStyleOptionToolButton::ToolButtonFeature f2 = *(QStyleOptionToolButton::ToolButtonFeature*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStyleOptionToolButton::ToolButtonFeature> (*)(QStyleOptionToolButton::ToolButtonFeature, QStyleOptionToolButton::ToolButtonFeature) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:612
// [4] QFlags<QStyleOptionToolButton::ToolButtonFeatures::enum_type> operator|(QStyleOptionToolButton::ToolButtonFeatures::enum_type, QFlags<QStyleOptionToolButton::ToolButtonFeatures::enum_type>) 
// (12)qm1020373800 (61)_ZorN22QStyleOptionToolButton17ToolButtonFeatureE6QFlagsIS0_E
/*void qm1020373800_336(QStyleOptionToolButton::ToolButtonFeature f1, QFlags<QStyleOptionToolButton::ToolButtonFeature> f2)*/ {
  QStyleOptionToolButton::ToolButtonFeature f1 = *(QStyleOptionToolButton::ToolButtonFeature*)this_; QFlags<QStyleOptionToolButton::ToolButtonFeature> f2 = *(QFlags<QStyleOptionToolButton::ToolButtonFeature>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStyleOptionToolButton::ToolButtonFeature> (*)(QStyleOptionToolButton::ToolButtonFeature, QFlags<QStyleOptionToolButton::ToolButtonFeature>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:469
// [4] QIncompatibleFlag operator|(QStyleOptionViewItem::ViewItemFeatures::enum_type, int) 
// (11)qm613323026 (46)_ZorN20QStyleOptionViewItem15ViewItemFeatureEi
/*void qm613323026_337(QStyleOptionViewItem::ViewItemFeature f1, int f2)*/ {
  QStyleOptionViewItem::ViewItemFeature f1 = *(QStyleOptionViewItem::ViewItemFeature*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QStyleOptionViewItem::ViewItemFeature, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:469
// [4] QFlags<QStyleOptionViewItem::ViewItemFeatures::enum_type> operator|(QStyleOptionViewItem::ViewItemFeatures::enum_type, QStyleOptionViewItem::ViewItemFeatures::enum_type) 
// (12)qm3008102304 (48)_ZorN20QStyleOptionViewItem15ViewItemFeatureES0_
/*void qm3008102304_338(QStyleOptionViewItem::ViewItemFeature f1, QStyleOptionViewItem::ViewItemFeature f2)*/ {
  QStyleOptionViewItem::ViewItemFeature f1 = *(QStyleOptionViewItem::ViewItemFeature*)this_; QStyleOptionViewItem::ViewItemFeature f2 = *(QStyleOptionViewItem::ViewItemFeature*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStyleOptionViewItem::ViewItemFeature> (*)(QStyleOptionViewItem::ViewItemFeature, QStyleOptionViewItem::ViewItemFeature) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:469
// [4] QFlags<QStyleOptionViewItem::ViewItemFeatures::enum_type> operator|(QStyleOptionViewItem::ViewItemFeatures::enum_type, QFlags<QStyleOptionViewItem::ViewItemFeatures::enum_type>) 
// (12)qm4071652559 (57)_ZorN20QStyleOptionViewItem15ViewItemFeatureE6QFlagsIS0_E
/*void qm4071652559_339(QStyleOptionViewItem::ViewItemFeature f1, QFlags<QStyleOptionViewItem::ViewItemFeature> f2)*/ {
  QStyleOptionViewItem::ViewItemFeature f1 = *(QStyleOptionViewItem::ViewItemFeature*)this_; QFlags<QStyleOptionViewItem::ViewItemFeature> f2 = *(QFlags<QStyleOptionViewItem::ViewItemFeature>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStyleOptionViewItem::ViewItemFeature> (*)(QStyleOptionViewItem::ViewItemFeature, QFlags<QStyleOptionViewItem::ViewItemFeature>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:338
// [4] QIncompatibleFlag operator|(QStyleOptionToolBar::ToolBarFeatures::enum_type, int) 
// (11)qm798758702 (44)_ZorN19QStyleOptionToolBar14ToolBarFeatureEi
/*void qm798758702_340(QStyleOptionToolBar::ToolBarFeature f1, int f2)*/ {
  QStyleOptionToolBar::ToolBarFeature f1 = *(QStyleOptionToolBar::ToolBarFeature*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QStyleOptionToolBar::ToolBarFeature, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:338
// [4] QFlags<QStyleOptionToolBar::ToolBarFeatures::enum_type> operator|(QStyleOptionToolBar::ToolBarFeatures::enum_type, QStyleOptionToolBar::ToolBarFeatures::enum_type) 
// (12)qm3294866264 (46)_ZorN19QStyleOptionToolBar14ToolBarFeatureES0_
/*void qm3294866264_341(QStyleOptionToolBar::ToolBarFeature f1, QStyleOptionToolBar::ToolBarFeature f2)*/ {
  QStyleOptionToolBar::ToolBarFeature f1 = *(QStyleOptionToolBar::ToolBarFeature*)this_; QStyleOptionToolBar::ToolBarFeature f2 = *(QStyleOptionToolBar::ToolBarFeature*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStyleOptionToolBar::ToolBarFeature> (*)(QStyleOptionToolBar::ToolBarFeature, QStyleOptionToolBar::ToolBarFeature) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:338
// [4] QFlags<QStyleOptionToolBar::ToolBarFeatures::enum_type> operator|(QStyleOptionToolBar::ToolBarFeatures::enum_type, QFlags<QStyleOptionToolBar::ToolBarFeatures::enum_type>) 
// (12)qm3834096371 (55)_ZorN19QStyleOptionToolBar14ToolBarFeatureE6QFlagsIS0_E
/*void qm3834096371_342(QStyleOptionToolBar::ToolBarFeature f1, QFlags<QStyleOptionToolBar::ToolBarFeature> f2)*/ {
  QStyleOptionToolBar::ToolBarFeature f1 = *(QStyleOptionToolBar::ToolBarFeature*)this_; QFlags<QStyleOptionToolBar::ToolBarFeature> f2 = *(QFlags<QStyleOptionToolBar::ToolBarFeature>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStyleOptionToolBar::ToolBarFeature> (*)(QStyleOptionToolBar::ToolBarFeature, QFlags<QStyleOptionToolBar::ToolBarFeature>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:193
// [4] QIncompatibleFlag operator|(QGraphicsBlurEffect::BlurHints::enum_type, int) 
// (12)qm3757820114 (37)_ZorN19QGraphicsBlurEffect8BlurHintEi
/*void qm3757820114_343(QGraphicsBlurEffect::BlurHint f1, int f2)*/ {
  QGraphicsBlurEffect::BlurHint f1 = *(QGraphicsBlurEffect::BlurHint*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QGraphicsBlurEffect::BlurHint, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:193
// [4] QFlags<QGraphicsBlurEffect::BlurHints::enum_type> operator|(QGraphicsBlurEffect::BlurHints::enum_type, QGraphicsBlurEffect::BlurHints::enum_type) 
// (12)qm1778793163 (39)_ZorN19QGraphicsBlurEffect8BlurHintES0_
/*void qm1778793163_344(QGraphicsBlurEffect::BlurHint f1, QGraphicsBlurEffect::BlurHint f2)*/ {
  QGraphicsBlurEffect::BlurHint f1 = *(QGraphicsBlurEffect::BlurHint*)this_; QGraphicsBlurEffect::BlurHint f2 = *(QGraphicsBlurEffect::BlurHint*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QGraphicsBlurEffect::BlurHint> (*)(QGraphicsBlurEffect::BlurHint, QGraphicsBlurEffect::BlurHint) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:193
// [4] QFlags<QGraphicsBlurEffect::BlurHints::enum_type> operator|(QGraphicsBlurEffect::BlurHints::enum_type, QFlags<QGraphicsBlurEffect::BlurHints::enum_type>) 
// (11)qm237859771 (48)_ZorN19QGraphicsBlurEffect8BlurHintE6QFlagsIS0_E
/*void qm237859771_345(QGraphicsBlurEffect::BlurHint f1, QFlags<QGraphicsBlurEffect::BlurHint> f2)*/ {
  QGraphicsBlurEffect::BlurHint f1 = *(QGraphicsBlurEffect::BlurHint*)this_; QFlags<QGraphicsBlurEffect::BlurHint> f2 = *(QFlags<QGraphicsBlurEffect::BlurHint>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QGraphicsBlurEffect::BlurHint> (*)(QGraphicsBlurEffect::BlurHint, QFlags<QGraphicsBlurEffect::BlurHint>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:261
// [4] QIncompatibleFlag operator|(QStyleOptionButton::ButtonFeatures::enum_type, int) 
// (11)qm122037573 (42)_ZorN18QStyleOptionButton13ButtonFeatureEi
/*void qm122037573_346(QStyleOptionButton::ButtonFeature f1, int f2)*/ {
  QStyleOptionButton::ButtonFeature f1 = *(QStyleOptionButton::ButtonFeature*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QStyleOptionButton::ButtonFeature, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:261
// [4] QFlags<QStyleOptionButton::ButtonFeatures::enum_type> operator|(QStyleOptionButton::ButtonFeatures::enum_type, QStyleOptionButton::ButtonFeatures::enum_type) 
// (12)qm2327666798 (44)_ZorN18QStyleOptionButton13ButtonFeatureES0_
/*void qm2327666798_347(QStyleOptionButton::ButtonFeature f1, QStyleOptionButton::ButtonFeature f2)*/ {
  QStyleOptionButton::ButtonFeature f1 = *(QStyleOptionButton::ButtonFeature*)this_; QStyleOptionButton::ButtonFeature f2 = *(QStyleOptionButton::ButtonFeature*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStyleOptionButton::ButtonFeature> (*)(QStyleOptionButton::ButtonFeature, QStyleOptionButton::ButtonFeature) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:261
// [4] QFlags<QStyleOptionButton::ButtonFeatures::enum_type> operator|(QStyleOptionButton::ButtonFeatures::enum_type, QFlags<QStyleOptionButton::ButtonFeatures::enum_type>) 
// (12)qm1355701198 (53)_ZorN18QStyleOptionButton13ButtonFeatureE6QFlagsIS0_E
/*void qm1355701198_348(QStyleOptionButton::ButtonFeature f1, QFlags<QStyleOptionButton::ButtonFeature> f2)*/ {
  QStyleOptionButton::ButtonFeature f1 = *(QStyleOptionButton::ButtonFeature*)this_; QFlags<QStyleOptionButton::ButtonFeature> f2 = *(QFlags<QStyleOptionButton::ButtonFeature>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStyleOptionButton::ButtonFeature> (*)(QStyleOptionButton::ButtonFeature, QFlags<QStyleOptionButton::ButtonFeature>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:89
// [4] QIncompatibleFlag operator|(QGestureRecognizer::Result::enum_type, int) 
// (12)qm1765320676 (39)_ZorN18QGestureRecognizer10ResultFlagEi
/*void qm1765320676_349(QGestureRecognizer::ResultFlag f1, int f2)*/ {
  QGestureRecognizer::ResultFlag f1 = *(QGestureRecognizer::ResultFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QGestureRecognizer::ResultFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:89
// [4] QFlags<QGestureRecognizer::Result::enum_type> operator|(QGestureRecognizer::Result::enum_type, QGestureRecognizer::Result::enum_type) 
// (12)qm1041719732 (41)_ZorN18QGestureRecognizer10ResultFlagES0_
/*void qm1041719732_350(QGestureRecognizer::ResultFlag f1, QGestureRecognizer::ResultFlag f2)*/ {
  QGestureRecognizer::ResultFlag f1 = *(QGestureRecognizer::ResultFlag*)this_; QGestureRecognizer::ResultFlag f2 = *(QGestureRecognizer::ResultFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QGestureRecognizer::ResultFlag> (*)(QGestureRecognizer::ResultFlag, QGestureRecognizer::ResultFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesturerecognizer.h:89
// [4] QFlags<QGestureRecognizer::Result::enum_type> operator|(QGestureRecognizer::Result::enum_type, QFlags<QGestureRecognizer::Result::enum_type>) 
// (12)qm2144161204 (50)_ZorN18QGestureRecognizer10ResultFlagE6QFlagsIS0_E
/*void qm2144161204_351(QGestureRecognizer::ResultFlag f1, QFlags<QGestureRecognizer::ResultFlag> f2)*/ {
  QGestureRecognizer::ResultFlag f1 = *(QGestureRecognizer::ResultFlag*)this_; QFlags<QGestureRecognizer::ResultFlag> f2 = *(QFlags<QGestureRecognizer::ResultFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QGestureRecognizer::ResultFlag> (*)(QGestureRecognizer::ResultFlag, QFlags<QGestureRecognizer::ResultFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:152
// [4] QIncompatibleFlag operator|(QStyleOptionFrame::FrameFeatures::enum_type, int) 
// (12)qm2725693087 (40)_ZorN17QStyleOptionFrame12FrameFeatureEi
/*void qm2725693087_352(QStyleOptionFrame::FrameFeature f1, int f2)*/ {
  QStyleOptionFrame::FrameFeature f1 = *(QStyleOptionFrame::FrameFeature*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QStyleOptionFrame::FrameFeature, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:152
// [4] QFlags<QStyleOptionFrame::FrameFeatures::enum_type> operator|(QStyleOptionFrame::FrameFeatures::enum_type, QStyleOptionFrame::FrameFeatures::enum_type) 
// (12)qm3362347785 (42)_ZorN17QStyleOptionFrame12FrameFeatureES0_
/*void qm3362347785_353(QStyleOptionFrame::FrameFeature f1, QStyleOptionFrame::FrameFeature f2)*/ {
  QStyleOptionFrame::FrameFeature f1 = *(QStyleOptionFrame::FrameFeature*)this_; QStyleOptionFrame::FrameFeature f2 = *(QStyleOptionFrame::FrameFeature*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStyleOptionFrame::FrameFeature> (*)(QStyleOptionFrame::FrameFeature, QStyleOptionFrame::FrameFeature) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:152
// [4] QFlags<QStyleOptionFrame::FrameFeatures::enum_type> operator|(QStyleOptionFrame::FrameFeatures::enum_type, QFlags<QStyleOptionFrame::FrameFeatures::enum_type>) 
// (12)qm2910287033 (51)_ZorN17QStyleOptionFrame12FrameFeatureE6QFlagsIS0_E
/*void qm2910287033_354(QStyleOptionFrame::FrameFeature f1, QFlags<QStyleOptionFrame::FrameFeature> f2)*/ {
  QStyleOptionFrame::FrameFeature f1 = *(QStyleOptionFrame::FrameFeature*)this_; QFlags<QStyleOptionFrame::FrameFeature> f2 = *(QFlags<QStyleOptionFrame::FrameFeature>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStyleOptionFrame::FrameFeature> (*)(QStyleOptionFrame::FrameFeature, QFlags<QStyleOptionFrame::FrameFeature>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:78
// [4] QIncompatibleFlag operator|(QFileIconProvider::Options::enum_type, int) 
// (12)qm2685625921 (33)_ZorN17QFileIconProvider6OptionEi
/*void qm2685625921_355(QFileIconProvider::Option f1, int f2)*/ {
  QFileIconProvider::Option f1 = *(QFileIconProvider::Option*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QFileIconProvider::Option, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:78
// [4] QFlags<QFileIconProvider::Options::enum_type> operator|(QFileIconProvider::Options::enum_type, QFileIconProvider::Options::enum_type) 
// (10)qm17043989 (35)_ZorN17QFileIconProvider6OptionES0_
/*void qm17043989_356(QFileIconProvider::Option f1, QFileIconProvider::Option f2)*/ {
  QFileIconProvider::Option f1 = *(QFileIconProvider::Option*)this_; QFileIconProvider::Option f2 = *(QFileIconProvider::Option*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QFileIconProvider::Option> (*)(QFileIconProvider::Option, QFileIconProvider::Option) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfileiconprovider.h:78
// [4] QFlags<QFileIconProvider::Options::enum_type> operator|(QFileIconProvider::Options::enum_type, QFlags<QFileIconProvider::Options::enum_type>) 
// (11)qm232226371 (44)_ZorN17QFileIconProvider6OptionE6QFlagsIS0_E
/*void qm232226371_357(QFileIconProvider::Option f1, QFlags<QFileIconProvider::Option> f2)*/ {
  QFileIconProvider::Option f1 = *(QFileIconProvider::Option*)this_; QFlags<QFileIconProvider::Option> f2 = *(QFlags<QFileIconProvider::Option>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QFileIconProvider::Option> (*)(QFileIconProvider::Option, QFlags<QFileIconProvider::Option>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:385
// [4] QIncompatibleFlag operator|(QAbstractItemView::EditTriggers::enum_type, int) 
// (12)qm3594416407 (39)_ZorN17QAbstractItemView11EditTriggerEi
/*void qm3594416407_358(QAbstractItemView::EditTrigger f1, int f2)*/ {
  QAbstractItemView::EditTrigger f1 = *(QAbstractItemView::EditTrigger*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QAbstractItemView::EditTrigger, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:385
// [4] QFlags<QAbstractItemView::EditTriggers::enum_type> operator|(QAbstractItemView::EditTriggers::enum_type, QAbstractItemView::EditTriggers::enum_type) 
// (12)qm1849039661 (41)_ZorN17QAbstractItemView11EditTriggerES0_
/*void qm1849039661_359(QAbstractItemView::EditTrigger f1, QAbstractItemView::EditTrigger f2)*/ {
  QAbstractItemView::EditTrigger f1 = *(QAbstractItemView::EditTrigger*)this_; QAbstractItemView::EditTrigger f2 = *(QAbstractItemView::EditTrigger*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QAbstractItemView::EditTrigger> (*)(QAbstractItemView::EditTrigger, QAbstractItemView::EditTrigger) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractitemview.h:385
// [4] QFlags<QAbstractItemView::EditTriggers::enum_type> operator|(QAbstractItemView::EditTriggers::enum_type, QFlags<QAbstractItemView::EditTriggers::enum_type>) 
// (12)qm1093602902 (50)_ZorN17QAbstractItemView11EditTriggerE6QFlagsIS0_E
/*void qm1093602902_360(QAbstractItemView::EditTrigger f1, QFlags<QAbstractItemView::EditTrigger> f2)*/ {
  QAbstractItemView::EditTrigger f1 = *(QAbstractItemView::EditTrigger*)this_; QFlags<QAbstractItemView::EditTrigger> f2 = *(QFlags<QAbstractItemView::EditTrigger>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QAbstractItemView::EditTrigger> (*)(QAbstractItemView::EditTrigger, QFlags<QAbstractItemView::EditTrigger>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:183
// [4] QIncompatibleFlag operator|(QFileSystemModel::Options::enum_type, int) 
// (11)qm368918176 (32)_ZorN16QFileSystemModel6OptionEi
/*void qm368918176_361(QFileSystemModel::Option f1, int f2)*/ {
  QFileSystemModel::Option f1 = *(QFileSystemModel::Option*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QFileSystemModel::Option, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:183
// [4] QFlags<QFileSystemModel::Options::enum_type> operator|(QFileSystemModel::Options::enum_type, QFileSystemModel::Options::enum_type) 
// (11)qm600947856 (34)_ZorN16QFileSystemModel6OptionES0_
/*void qm600947856_362(QFileSystemModel::Option f1, QFileSystemModel::Option f2)*/ {
  QFileSystemModel::Option f1 = *(QFileSystemModel::Option*)this_; QFileSystemModel::Option f2 = *(QFileSystemModel::Option*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QFileSystemModel::Option> (*)(QFileSystemModel::Option, QFileSystemModel::Option) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfilesystemmodel.h:183
// [4] QFlags<QFileSystemModel::Options::enum_type> operator|(QFileSystemModel::Options::enum_type, QFlags<QFileSystemModel::Options::enum_type>) 
// (11)qm760038946 (43)_ZorN16QFileSystemModel6OptionE6QFlagsIS0_E
/*void qm760038946_363(QFileSystemModel::Option f1, QFlags<QFileSystemModel::Option> f2)*/ {
  QFileSystemModel::Option f1 = *(QFileSystemModel::Option*)this_; QFlags<QFileSystemModel::Option> f2 = *(QFlags<QFileSystemModel::Option>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QFileSystemModel::Option> (*)(QFileSystemModel::Option, QFlags<QFileSystemModel::Option>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:164
// [4] QIncompatibleFlag operator|(QDialogButtonBox::StandardButtons::enum_type, int) 
// (12)qm3901105572 (41)_ZorN16QDialogButtonBox14StandardButtonEi
/*void qm3901105572_364(QDialogButtonBox::StandardButton f1, int f2)*/ {
  QDialogButtonBox::StandardButton f1 = *(QDialogButtonBox::StandardButton*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QDialogButtonBox::StandardButton, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:164
// [4] QFlags<QDialogButtonBox::StandardButtons::enum_type> operator|(QDialogButtonBox::StandardButtons::enum_type, QDialogButtonBox::StandardButtons::enum_type) 
// (12)qm3453504771 (43)_ZorN16QDialogButtonBox14StandardButtonES0_
/*void qm3453504771_365(QDialogButtonBox::StandardButton f1, QDialogButtonBox::StandardButton f2)*/ {
  QDialogButtonBox::StandardButton f1 = *(QDialogButtonBox::StandardButton*)this_; QDialogButtonBox::StandardButton f2 = *(QDialogButtonBox::StandardButton*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QDialogButtonBox::StandardButton> (*)(QDialogButtonBox::StandardButton, QDialogButtonBox::StandardButton) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdialogbuttonbox.h:164
// [4] QFlags<QDialogButtonBox::StandardButtons::enum_type> operator|(QDialogButtonBox::StandardButtons::enum_type, QFlags<QDialogButtonBox::StandardButtons::enum_type>) 
// (12)qm1413616428 (52)_ZorN16QDialogButtonBox14StandardButtonE6QFlagsIS0_E
/*void qm1413616428_366(QDialogButtonBox::StandardButton f1, QFlags<QDialogButtonBox::StandardButton> f2)*/ {
  QDialogButtonBox::StandardButton f1 = *(QDialogButtonBox::StandardButton*)this_; QFlags<QDialogButtonBox::StandardButton> f2 = *(QFlags<QDialogButtonBox::StandardButton>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QDialogButtonBox::StandardButton> (*)(QDialogButtonBox::StandardButton, QFlags<QDialogButtonBox::StandardButton>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:182
// [4] QIncompatibleFlag operator|(QAbstractSpinBox::StepEnabled::enum_type, int) 
// (12)qm2956850599 (42)_ZorN16QAbstractSpinBox15StepEnabledFlagEi
/*void qm2956850599_367(QAbstractSpinBox::StepEnabledFlag f1, int f2)*/ {
  QAbstractSpinBox::StepEnabledFlag f1 = *(QAbstractSpinBox::StepEnabledFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QAbstractSpinBox::StepEnabledFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:182
// [4] QFlags<QAbstractSpinBox::StepEnabled::enum_type> operator|(QAbstractSpinBox::StepEnabled::enum_type, QAbstractSpinBox::StepEnabled::enum_type) 
// (12)qm1613141167 (44)_ZorN16QAbstractSpinBox15StepEnabledFlagES0_
/*void qm1613141167_368(QAbstractSpinBox::StepEnabledFlag f1, QAbstractSpinBox::StepEnabledFlag f2)*/ {
  QAbstractSpinBox::StepEnabledFlag f1 = *(QAbstractSpinBox::StepEnabledFlag*)this_; QAbstractSpinBox::StepEnabledFlag f2 = *(QAbstractSpinBox::StepEnabledFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QAbstractSpinBox::StepEnabledFlag> (*)(QAbstractSpinBox::StepEnabledFlag, QAbstractSpinBox::StepEnabledFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qabstractspinbox.h:182
// [4] QFlags<QAbstractSpinBox::StepEnabled::enum_type> operator|(QAbstractSpinBox::StepEnabled::enum_type, QFlags<QAbstractSpinBox::StepEnabled::enum_type>) 
// (12)qm3728952407 (53)_ZorN16QAbstractSpinBox15StepEnabledFlagE6QFlagsIS0_E
/*void qm3728952407_369(QAbstractSpinBox::StepEnabledFlag f1, QFlags<QAbstractSpinBox::StepEnabledFlag> f2)*/ {
  QAbstractSpinBox::StepEnabledFlag f1 = *(QAbstractSpinBox::StepEnabledFlag*)this_; QFlags<QAbstractSpinBox::StepEnabledFlag> f2 = *(QFlags<QAbstractSpinBox::StepEnabledFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QAbstractSpinBox::StepEnabledFlag> (*)(QAbstractSpinBox::StepEnabledFlag, QFlags<QAbstractSpinBox::StepEnabledFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:307
// [4] QIncompatibleFlag operator|(QStyleOptionTab::CornerWidgets::enum_type, int) 
// (11)qm659273101 (38)_ZorN15QStyleOptionTab12CornerWidgetEi
/*void qm659273101_370(QStyleOptionTab::CornerWidget f1, int f2)*/ {
  QStyleOptionTab::CornerWidget f1 = *(QStyleOptionTab::CornerWidget*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QStyleOptionTab::CornerWidget, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:307
// [4] QFlags<QStyleOptionTab::CornerWidgets::enum_type> operator|(QStyleOptionTab::CornerWidgets::enum_type, QStyleOptionTab::CornerWidgets::enum_type) 
// (12)qm2039582305 (40)_ZorN15QStyleOptionTab12CornerWidgetES0_
/*void qm2039582305_371(QStyleOptionTab::CornerWidget f1, QStyleOptionTab::CornerWidget f2)*/ {
  QStyleOptionTab::CornerWidget f1 = *(QStyleOptionTab::CornerWidget*)this_; QStyleOptionTab::CornerWidget f2 = *(QStyleOptionTab::CornerWidget*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStyleOptionTab::CornerWidget> (*)(QStyleOptionTab::CornerWidget, QStyleOptionTab::CornerWidget) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qstyleoption.h:307
// [4] QFlags<QStyleOptionTab::CornerWidgets::enum_type> operator|(QStyleOptionTab::CornerWidgets::enum_type, QFlags<QStyleOptionTab::CornerWidgets::enum_type>) 
// (12)qm2184616723 (49)_ZorN15QStyleOptionTab12CornerWidgetE6QFlagsIS0_E
/*void qm2184616723_372(QStyleOptionTab::CornerWidget f1, QFlags<QStyleOptionTab::CornerWidget> f2)*/ {
  QStyleOptionTab::CornerWidget f1 = *(QStyleOptionTab::CornerWidget*)this_; QFlags<QStyleOptionTab::CornerWidget> f2 = *(QFlags<QStyleOptionTab::CornerWidget>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QStyleOptionTab::CornerWidget> (*)(QStyleOptionTab::CornerWidget, QFlags<QStyleOptionTab::CornerWidget>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:123
// [4] QIncompatibleFlag operator|(QGraphicsEffect::ChangeFlags::enum_type, int) 
// (12)qm4274099718 (36)_ZorN15QGraphicsEffect10ChangeFlagEi
/*void qm4274099718_373(QGraphicsEffect::ChangeFlag f1, int f2)*/ {
  QGraphicsEffect::ChangeFlag f1 = *(QGraphicsEffect::ChangeFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QGraphicsEffect::ChangeFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:123
// [4] QFlags<QGraphicsEffect::ChangeFlags::enum_type> operator|(QGraphicsEffect::ChangeFlags::enum_type, QGraphicsEffect::ChangeFlags::enum_type) 
// (10)qm58812185 (38)_ZorN15QGraphicsEffect10ChangeFlagES0_
/*void qm58812185_374(QGraphicsEffect::ChangeFlag f1, QGraphicsEffect::ChangeFlag f2)*/ {
  QGraphicsEffect::ChangeFlag f1 = *(QGraphicsEffect::ChangeFlag*)this_; QGraphicsEffect::ChangeFlag f2 = *(QGraphicsEffect::ChangeFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QGraphicsEffect::ChangeFlag> (*)(QGraphicsEffect::ChangeFlag, QGraphicsEffect::ChangeFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicseffect.h:123
// [4] QFlags<QGraphicsEffect::ChangeFlags::enum_type> operator|(QGraphicsEffect::ChangeFlags::enum_type, QFlags<QGraphicsEffect::ChangeFlags::enum_type>) 
// (12)qm2562029309 (47)_ZorN15QGraphicsEffect10ChangeFlagE6QFlagsIS0_E
/*void qm2562029309_375(QGraphicsEffect::ChangeFlag f1, QFlags<QGraphicsEffect::ChangeFlag> f2)*/ {
  QGraphicsEffect::ChangeFlag f1 = *(QGraphicsEffect::ChangeFlag*)this_; QFlags<QGraphicsEffect::ChangeFlag> f2 = *(QFlags<QGraphicsEffect::ChangeFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QGraphicsEffect::ChangeFlag> (*)(QGraphicsEffect::ChangeFlag, QFlags<QGraphicsEffect::ChangeFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:331
// [4] QIncompatibleFlag operator|(QGraphicsScene::SceneLayers::enum_type, int) 
// (11)qm227966336 (35)_ZorN14QGraphicsScene10SceneLayerEi
/*void qm227966336_376(QGraphicsScene::SceneLayer f1, int f2)*/ {
  QGraphicsScene::SceneLayer f1 = *(QGraphicsScene::SceneLayer*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QGraphicsScene::SceneLayer, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:331
// [4] QFlags<QGraphicsScene::SceneLayers::enum_type> operator|(QGraphicsScene::SceneLayers::enum_type, QGraphicsScene::SceneLayers::enum_type) 
// (12)qm1501597811 (37)_ZorN14QGraphicsScene10SceneLayerES0_
/*void qm1501597811_377(QGraphicsScene::SceneLayer f1, QGraphicsScene::SceneLayer f2)*/ {
  QGraphicsScene::SceneLayer f1 = *(QGraphicsScene::SceneLayer*)this_; QGraphicsScene::SceneLayer f2 = *(QGraphicsScene::SceneLayer*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QGraphicsScene::SceneLayer> (*)(QGraphicsScene::SceneLayer, QGraphicsScene::SceneLayer) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsscene.h:331
// [4] QFlags<QGraphicsScene::SceneLayers::enum_type> operator|(QGraphicsScene::SceneLayers::enum_type, QFlags<QGraphicsScene::SceneLayers::enum_type>) 
// (12)qm2939437233 (46)_ZorN14QGraphicsScene10SceneLayerE6QFlagsIS0_E
/*void qm2939437233_378(QGraphicsScene::SceneLayer f1, QFlags<QGraphicsScene::SceneLayer> f2)*/ {
  QGraphicsScene::SceneLayer f1 = *(QGraphicsScene::SceneLayer*)this_; QFlags<QGraphicsScene::SceneLayer> f2 = *(QFlags<QGraphicsScene::SceneLayer>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QGraphicsScene::SceneLayer> (*)(QGraphicsScene::SceneLayer, QFlags<QGraphicsScene::SceneLayer>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:198
// [4] QIncompatibleFlag operator|(QPinchGesture::ChangeFlags::enum_type, int) 
// (11)qm287913209 (34)_ZorN13QPinchGesture10ChangeFlagEi
/*void qm287913209_379(QPinchGesture::ChangeFlag f1, int f2)*/ {
  QPinchGesture::ChangeFlag f1 = *(QPinchGesture::ChangeFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QPinchGesture::ChangeFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:198
// [4] QFlags<QPinchGesture::ChangeFlags::enum_type> operator|(QPinchGesture::ChangeFlags::enum_type, QPinchGesture::ChangeFlags::enum_type) 
// (12)qm2826811207 (36)_ZorN13QPinchGesture10ChangeFlagES0_
/*void qm2826811207_380(QPinchGesture::ChangeFlag f1, QPinchGesture::ChangeFlag f2)*/ {
  QPinchGesture::ChangeFlag f1 = *(QPinchGesture::ChangeFlag*)this_; QPinchGesture::ChangeFlag f2 = *(QPinchGesture::ChangeFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QPinchGesture::ChangeFlag> (*)(QPinchGesture::ChangeFlag, QPinchGesture::ChangeFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgesture.h:198
// [4] QFlags<QPinchGesture::ChangeFlags::enum_type> operator|(QPinchGesture::ChangeFlags::enum_type, QFlags<QPinchGesture::ChangeFlags::enum_type>) 
// (12)qm4097649541 (45)_ZorN13QPinchGesture10ChangeFlagE6QFlagsIS0_E
/*void qm4097649541_381(QPinchGesture::ChangeFlag f1, QFlags<QPinchGesture::ChangeFlag> f2)*/ {
  QPinchGesture::ChangeFlag f1 = *(QPinchGesture::ChangeFlag*)this_; QFlags<QPinchGesture::ChangeFlag> f2 = *(QFlags<QPinchGesture::ChangeFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QPinchGesture::ChangeFlag> (*)(QPinchGesture::ChangeFlag, QFlags<QPinchGesture::ChangeFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:146
// [4] QIncompatibleFlag operator|(QMdiSubWindow::SubWindowOptions::enum_type, int) 
// (12)qm1382454569 (39)_ZorN13QMdiSubWindow15SubWindowOptionEi
/*void qm1382454569_382(QMdiSubWindow::SubWindowOption f1, int f2)*/ {
  QMdiSubWindow::SubWindowOption f1 = *(QMdiSubWindow::SubWindowOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QMdiSubWindow::SubWindowOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:146
// [4] QFlags<QMdiSubWindow::SubWindowOptions::enum_type> operator|(QMdiSubWindow::SubWindowOptions::enum_type, QMdiSubWindow::SubWindowOptions::enum_type) 
// (12)qm2291442281 (41)_ZorN13QMdiSubWindow15SubWindowOptionES0_
/*void qm2291442281_383(QMdiSubWindow::SubWindowOption f1, QMdiSubWindow::SubWindowOption f2)*/ {
  QMdiSubWindow::SubWindowOption f1 = *(QMdiSubWindow::SubWindowOption*)this_; QMdiSubWindow::SubWindowOption f2 = *(QMdiSubWindow::SubWindowOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QMdiSubWindow::SubWindowOption> (*)(QMdiSubWindow::SubWindowOption, QMdiSubWindow::SubWindowOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmdisubwindow.h:146
// [4] QFlags<QMdiSubWindow::SubWindowOptions::enum_type> operator|(QMdiSubWindow::SubWindowOptions::enum_type, QFlags<QMdiSubWindow::SubWindowOptions::enum_type>) 
// (11)qm465677065 (50)_ZorN13QMdiSubWindow15SubWindowOptionE6QFlagsIS0_E
/*void qm465677065_384(QMdiSubWindow::SubWindowOption f1, QFlags<QMdiSubWindow::SubWindowOption> f2)*/ {
  QMdiSubWindow::SubWindowOption f1 = *(QMdiSubWindow::SubWindowOption*)this_; QFlags<QMdiSubWindow::SubWindowOption> f2 = *(QFlags<QMdiSubWindow::SubWindowOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QMdiSubWindow::SubWindowOption> (*)(QMdiSubWindow::SubWindowOption, QFlags<QMdiSubWindow::SubWindowOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:294
// [4] QIncompatibleFlag operator|(QGraphicsView::OptimizationFlags::enum_type, int) 
// (12)qm2640158892 (40)_ZorN13QGraphicsView16OptimizationFlagEi
/*void qm2640158892_385(QGraphicsView::OptimizationFlag f1, int f2)*/ {
  QGraphicsView::OptimizationFlag f1 = *(QGraphicsView::OptimizationFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QGraphicsView::OptimizationFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:294
// [4] QFlags<QGraphicsView::OptimizationFlags::enum_type> operator|(QGraphicsView::OptimizationFlags::enum_type, QGraphicsView::OptimizationFlags::enum_type) 
// (12)qm2564015487 (42)_ZorN13QGraphicsView16OptimizationFlagES0_
/*void qm2564015487_386(QGraphicsView::OptimizationFlag f1, QGraphicsView::OptimizationFlag f2)*/ {
  QGraphicsView::OptimizationFlag f1 = *(QGraphicsView::OptimizationFlag*)this_; QGraphicsView::OptimizationFlag f2 = *(QGraphicsView::OptimizationFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QGraphicsView::OptimizationFlag> (*)(QGraphicsView::OptimizationFlag, QGraphicsView::OptimizationFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:294
// [4] QFlags<QGraphicsView::OptimizationFlags::enum_type> operator|(QGraphicsView::OptimizationFlags::enum_type, QFlags<QGraphicsView::OptimizationFlags::enum_type>) 
// (12)qm2622451772 (51)_ZorN13QGraphicsView16OptimizationFlagE6QFlagsIS0_E
/*void qm2622451772_387(QGraphicsView::OptimizationFlag f1, QFlags<QGraphicsView::OptimizationFlag> f2)*/ {
  QGraphicsView::OptimizationFlag f1 = *(QGraphicsView::OptimizationFlag*)this_; QFlags<QGraphicsView::OptimizationFlag> f2 = *(QFlags<QGraphicsView::OptimizationFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QGraphicsView::OptimizationFlag> (*)(QGraphicsView::OptimizationFlag, QFlags<QGraphicsView::OptimizationFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:293
// [4] QIncompatibleFlag operator|(QGraphicsView::CacheMode::enum_type, int) 
// (12)qm3813218049 (37)_ZorN13QGraphicsView13CacheModeFlagEi
/*void qm3813218049_388(QGraphicsView::CacheModeFlag f1, int f2)*/ {
  QGraphicsView::CacheModeFlag f1 = *(QGraphicsView::CacheModeFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QGraphicsView::CacheModeFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:293
// [4] QFlags<QGraphicsView::CacheMode::enum_type> operator|(QGraphicsView::CacheMode::enum_type, QGraphicsView::CacheMode::enum_type) 
// (12)qm3598671840 (39)_ZorN13QGraphicsView13CacheModeFlagES0_
/*void qm3598671840_389(QGraphicsView::CacheModeFlag f1, QGraphicsView::CacheModeFlag f2)*/ {
  QGraphicsView::CacheModeFlag f1 = *(QGraphicsView::CacheModeFlag*)this_; QGraphicsView::CacheModeFlag f2 = *(QGraphicsView::CacheModeFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QGraphicsView::CacheModeFlag> (*)(QGraphicsView::CacheModeFlag, QGraphicsView::CacheModeFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsview.h:293
// [4] QFlags<QGraphicsView::CacheMode::enum_type> operator|(QGraphicsView::CacheMode::enum_type, QFlags<QGraphicsView::CacheMode::enum_type>) 
// (12)qm2189068268 (48)_ZorN13QGraphicsView13CacheModeFlagE6QFlagsIS0_E
/*void qm2189068268_390(QGraphicsView::CacheModeFlag f1, QFlags<QGraphicsView::CacheModeFlag> f2)*/ {
  QGraphicsView::CacheModeFlag f1 = *(QGraphicsView::CacheModeFlag*)this_; QFlags<QGraphicsView::CacheModeFlag> f2 = *(QFlags<QGraphicsView::CacheModeFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QGraphicsView::CacheModeFlag> (*)(QGraphicsView::CacheModeFlag, QFlags<QGraphicsView::CacheModeFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:497
// [4] QIncompatibleFlag operator|(QGraphicsItem::GraphicsItemFlags::enum_type, int) 
// (12)qm4281629440 (40)_ZorN13QGraphicsItem16GraphicsItemFlagEi
/*void qm4281629440_391(QGraphicsItem::GraphicsItemFlag f1, int f2)*/ {
  QGraphicsItem::GraphicsItemFlag f1 = *(QGraphicsItem::GraphicsItemFlag*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QGraphicsItem::GraphicsItemFlag, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:497
// [4] QFlags<QGraphicsItem::GraphicsItemFlags::enum_type> operator|(QGraphicsItem::GraphicsItemFlags::enum_type, QGraphicsItem::GraphicsItemFlags::enum_type) 
// (12)qm2338348975 (42)_ZorN13QGraphicsItem16GraphicsItemFlagES0_
/*void qm2338348975_392(QGraphicsItem::GraphicsItemFlag f1, QGraphicsItem::GraphicsItemFlag f2)*/ {
  QGraphicsItem::GraphicsItemFlag f1 = *(QGraphicsItem::GraphicsItemFlag*)this_; QGraphicsItem::GraphicsItemFlag f2 = *(QGraphicsItem::GraphicsItemFlag*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QGraphicsItem::GraphicsItemFlag> (*)(QGraphicsItem::GraphicsItemFlag, QGraphicsItem::GraphicsItemFlag) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qgraphicsitem.h:497
// [4] QFlags<QGraphicsItem::GraphicsItemFlags::enum_type> operator|(QGraphicsItem::GraphicsItemFlags::enum_type, QFlags<QGraphicsItem::GraphicsItemFlags::enum_type>) 
// (12)qm2732047412 (51)_ZorN13QGraphicsItem16GraphicsItemFlagE6QFlagsIS0_E
/*void qm2732047412_393(QGraphicsItem::GraphicsItemFlag f1, QFlags<QGraphicsItem::GraphicsItemFlag> f2)*/ {
  QGraphicsItem::GraphicsItemFlag f1 = *(QGraphicsItem::GraphicsItemFlag*)this_; QFlags<QGraphicsItem::GraphicsItemFlag> f2 = *(QFlags<QGraphicsItem::GraphicsItemFlag>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QGraphicsItem::GraphicsItemFlag> (*)(QGraphicsItem::GraphicsItemFlag, QFlags<QGraphicsItem::GraphicsItemFlag>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:99
// [4] QIncompatibleFlag operator|(QFontComboBox::FontFilters::enum_type, int) 
// (11)qm241959957 (34)_ZorN13QFontComboBox10FontFilterEi
/*void qm241959957_394(QFontComboBox::FontFilter f1, int f2)*/ {
  QFontComboBox::FontFilter f1 = *(QFontComboBox::FontFilter*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QFontComboBox::FontFilter, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:99
// [4] QFlags<QFontComboBox::FontFilters::enum_type> operator|(QFontComboBox::FontFilters::enum_type, QFontComboBox::FontFilters::enum_type) 
// (12)qm2087658574 (36)_ZorN13QFontComboBox10FontFilterES0_
/*void qm2087658574_395(QFontComboBox::FontFilter f1, QFontComboBox::FontFilter f2)*/ {
  QFontComboBox::FontFilter f1 = *(QFontComboBox::FontFilter*)this_; QFontComboBox::FontFilter f2 = *(QFontComboBox::FontFilter*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QFontComboBox::FontFilter> (*)(QFontComboBox::FontFilter, QFontComboBox::FontFilter) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontcombobox.h:99
// [4] QFlags<QFontComboBox::FontFilters::enum_type> operator|(QFontComboBox::FontFilters::enum_type, QFlags<QFontComboBox::FontFilters::enum_type>) 
// (12)qm2155871506 (45)_ZorN13QFontComboBox10FontFilterE6QFlagsIS0_E
/*void qm2155871506_396(QFontComboBox::FontFilter f1, QFlags<QFontComboBox::FontFilter> f2)*/ {
  QFontComboBox::FontFilter f1 = *(QFontComboBox::FontFilter*)this_; QFlags<QFontComboBox::FontFilter> f2 = *(QFlags<QFontComboBox::FontFilter>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QFontComboBox::FontFilter> (*)(QFontComboBox::FontFilter, QFlags<QFontComboBox::FontFilter>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:235
// [4] QIncompatibleFlag operator|(QDateTimeEdit::Sections::enum_type, int) 
// (12)qm3929714900 (30)_ZorN13QDateTimeEdit7SectionEi
/*void qm3929714900_397(QDateTimeEdit::Section f1, int f2)*/ {
  QDateTimeEdit::Section f1 = *(QDateTimeEdit::Section*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QDateTimeEdit::Section, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:235
// [4] QFlags<QDateTimeEdit::Sections::enum_type> operator|(QDateTimeEdit::Sections::enum_type, QDateTimeEdit::Sections::enum_type) 
// (12)qm1652707714 (32)_ZorN13QDateTimeEdit7SectionES0_
/*void qm1652707714_398(QDateTimeEdit::Section f1, QDateTimeEdit::Section f2)*/ {
  QDateTimeEdit::Section f1 = *(QDateTimeEdit::Section*)this_; QDateTimeEdit::Section f2 = *(QDateTimeEdit::Section*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QDateTimeEdit::Section> (*)(QDateTimeEdit::Section, QDateTimeEdit::Section) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdatetimeedit.h:235
// [4] QFlags<QDateTimeEdit::Sections::enum_type> operator|(QDateTimeEdit::Sections::enum_type, QFlags<QDateTimeEdit::Sections::enum_type>) 
// (12)qm1637299846 (41)_ZorN13QDateTimeEdit7SectionE6QFlagsIS0_E
/*void qm1637299846_399(QDateTimeEdit::Section f1, QFlags<QDateTimeEdit::Section> f2)*/ {
  QDateTimeEdit::Section f1 = *(QDateTimeEdit::Section*)this_; QFlags<QDateTimeEdit::Section> f2 = *(QFlags<QDateTimeEdit::Section>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QDateTimeEdit::Section> (*)(QDateTimeEdit::Section, QFlags<QDateTimeEdit::Section>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:226
// [4] QIncompatibleFlag operator|(QInputDialog::InputDialogOptions::enum_type, int) 
// (11)qm317201408 (40)_ZorN12QInputDialog17InputDialogOptionEi
/*void qm317201408_400(QInputDialog::InputDialogOption f1, int f2)*/ {
  QInputDialog::InputDialogOption f1 = *(QInputDialog::InputDialogOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QInputDialog::InputDialogOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:226
// [4] QFlags<QInputDialog::InputDialogOptions::enum_type> operator|(QInputDialog::InputDialogOptions::enum_type, QInputDialog::InputDialogOptions::enum_type) 
// (12)qm1488340616 (42)_ZorN12QInputDialog17InputDialogOptionES0_
/*void qm1488340616_401(QInputDialog::InputDialogOption f1, QInputDialog::InputDialogOption f2)*/ {
  QInputDialog::InputDialogOption f1 = *(QInputDialog::InputDialogOption*)this_; QInputDialog::InputDialogOption f2 = *(QInputDialog::InputDialogOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QInputDialog::InputDialogOption> (*)(QInputDialog::InputDialogOption, QInputDialog::InputDialogOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qinputdialog.h:226
// [4] QFlags<QInputDialog::InputDialogOptions::enum_type> operator|(QInputDialog::InputDialogOptions::enum_type, QFlags<QInputDialog::InputDialogOptions::enum_type>) 
// (12)qm2064261536 (51)_ZorN12QInputDialog17InputDialogOptionE6QFlagsIS0_E
/*void qm2064261536_402(QInputDialog::InputDialogOption f1, QFlags<QInputDialog::InputDialogOption> f2)*/ {
  QInputDialog::InputDialogOption f1 = *(QInputDialog::InputDialogOption*)this_; QFlags<QInputDialog::InputDialogOption> f2 = *(QFlags<QInputDialog::InputDialogOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QInputDialog::InputDialogOption> (*)(QInputDialog::InputDialogOption, QFlags<QInputDialog::InputDialogOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:126
// [4] QIncompatibleFlag operator|(QColorDialog::ColorDialogOptions::enum_type, int) 
// (12)qm3036716011 (40)_ZorN12QColorDialog17ColorDialogOptionEi
/*void qm3036716011_403(QColorDialog::ColorDialogOption f1, int f2)*/ {
  QColorDialog::ColorDialogOption f1 = *(QColorDialog::ColorDialogOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QColorDialog::ColorDialogOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:126
// [4] QFlags<QColorDialog::ColorDialogOptions::enum_type> operator|(QColorDialog::ColorDialogOptions::enum_type, QColorDialog::ColorDialogOptions::enum_type) 
// (12)qm2531319236 (42)_ZorN12QColorDialog17ColorDialogOptionES0_
/*void qm2531319236_404(QColorDialog::ColorDialogOption f1, QColorDialog::ColorDialogOption f2)*/ {
  QColorDialog::ColorDialogOption f1 = *(QColorDialog::ColorDialogOption*)this_; QColorDialog::ColorDialogOption f2 = *(QColorDialog::ColorDialogOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QColorDialog::ColorDialogOption> (*)(QColorDialog::ColorDialogOption, QColorDialog::ColorDialogOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qcolordialog.h:126
// [4] QFlags<QColorDialog::ColorDialogOptions::enum_type> operator|(QColorDialog::ColorDialogOptions::enum_type, QFlags<QColorDialog::ColorDialogOptions::enum_type>) 
// (12)qm1520556637 (51)_ZorN12QColorDialog17ColorDialogOptionE6QFlagsIS0_E
/*void qm1520556637_405(QColorDialog::ColorDialogOption f1, QFlags<QColorDialog::ColorDialogOption> f2)*/ {
  QColorDialog::ColorDialogOption f1 = *(QColorDialog::ColorDialogOption*)this_; QFlags<QColorDialog::ColorDialogOption> f2 = *(QFlags<QColorDialog::ColorDialogOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QColorDialog::ColorDialogOption> (*)(QColorDialog::ColorDialogOption, QFlags<QColorDialog::ColorDialogOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:234
// [4] QIncompatibleFlag operator|(QSizePolicy::ControlTypes::enum_type, int) 
// (12)qm2397430628 (33)_ZorN11QSizePolicy11ControlTypeEi
/*void qm2397430628_406(QSizePolicy::ControlType f1, int f2)*/ {
  QSizePolicy::ControlType f1 = *(QSizePolicy::ControlType*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QSizePolicy::ControlType, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:234
// [4] QFlags<QSizePolicy::ControlTypes::enum_type> operator|(QSizePolicy::ControlTypes::enum_type, QSizePolicy::ControlTypes::enum_type) 
// (12)qm1948621739 (35)_ZorN11QSizePolicy11ControlTypeES0_
/*void qm1948621739_407(QSizePolicy::ControlType f1, QSizePolicy::ControlType f2)*/ {
  QSizePolicy::ControlType f1 = *(QSizePolicy::ControlType*)this_; QSizePolicy::ControlType f2 = *(QSizePolicy::ControlType*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSizePolicy::ControlType> (*)(QSizePolicy::ControlType, QSizePolicy::ControlType) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:234
// [4] QFlags<QSizePolicy::ControlTypes::enum_type> operator|(QSizePolicy::ControlTypes::enum_type, QFlags<QSizePolicy::ControlTypes::enum_type>) 
// (12)qm4078982631 (44)_ZorN11QSizePolicy11ControlTypeE6QFlagsIS0_E
/*void qm4078982631_408(QSizePolicy::ControlType f1, QFlags<QSizePolicy::ControlType> f2)*/ {
  QSizePolicy::ControlType f1 = *(QSizePolicy::ControlType*)this_; QFlags<QSizePolicy::ControlType> f2 = *(QFlags<QSizePolicy::ControlType>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QSizePolicy::ControlType> (*)(QSizePolicy::ControlType, QFlags<QSizePolicy::ControlType>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:308
// [4] QIncompatibleFlag operator|(QMessageBox::StandardButtons::enum_type, int) 
// (12)qm2980169326 (36)_ZorN11QMessageBox14StandardButtonEi
/*void qm2980169326_409(QMessageBox::StandardButton f1, int f2)*/ {
  QMessageBox::StandardButton f1 = *(QMessageBox::StandardButton*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QMessageBox::StandardButton, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:308
// [4] QFlags<QMessageBox::StandardButtons::enum_type> operator|(QMessageBox::StandardButtons::enum_type, QMessageBox::StandardButtons::enum_type) 
// (12)qm3318650914 (38)_ZorN11QMessageBox14StandardButtonES0_
/*void qm3318650914_410(QMessageBox::StandardButton f1, QMessageBox::StandardButton f2)*/ {
  QMessageBox::StandardButton f1 = *(QMessageBox::StandardButton*)this_; QMessageBox::StandardButton f2 = *(QMessageBox::StandardButton*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QMessageBox::StandardButton> (*)(QMessageBox::StandardButton, QMessageBox::StandardButton) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmessagebox.h:308
// [4] QFlags<QMessageBox::StandardButtons::enum_type> operator|(QMessageBox::StandardButtons::enum_type, QFlags<QMessageBox::StandardButtons::enum_type>) 
// (12)qm1734923821 (47)_ZorN11QMessageBox14StandardButtonE6QFlagsIS0_E
/*void qm1734923821_411(QMessageBox::StandardButton f1, QFlags<QMessageBox::StandardButton> f2)*/ {
  QMessageBox::StandardButton f1 = *(QMessageBox::StandardButton*)this_; QFlags<QMessageBox::StandardButton> f2 = *(QFlags<QMessageBox::StandardButton>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QMessageBox::StandardButton> (*)(QMessageBox::StandardButton, QFlags<QMessageBox::StandardButton>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:221
// [4] QIncompatibleFlag operator|(QMainWindow::DockOptions::enum_type, int) 
// (12)qm1949422391 (32)_ZorN11QMainWindow10DockOptionEi
/*void qm1949422391_412(QMainWindow::DockOption f1, int f2)*/ {
  QMainWindow::DockOption f1 = *(QMainWindow::DockOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QMainWindow::DockOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:221
// [4] QFlags<QMainWindow::DockOptions::enum_type> operator|(QMainWindow::DockOptions::enum_type, QMainWindow::DockOptions::enum_type) 
// (12)qm3278528324 (34)_ZorN11QMainWindow10DockOptionES0_
/*void qm3278528324_413(QMainWindow::DockOption f1, QMainWindow::DockOption f2)*/ {
  QMainWindow::DockOption f1 = *(QMainWindow::DockOption*)this_; QMainWindow::DockOption f2 = *(QMainWindow::DockOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QMainWindow::DockOption> (*)(QMainWindow::DockOption, QMainWindow::DockOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qmainwindow.h:221
// [4] QFlags<QMainWindow::DockOptions::enum_type> operator|(QMainWindow::DockOptions::enum_type, QFlags<QMainWindow::DockOptions::enum_type>) 
// (12)qm1573876813 (43)_ZorN11QMainWindow10DockOptionE6QFlagsIS0_E
/*void qm1573876813_414(QMainWindow::DockOption f1, QFlags<QMainWindow::DockOption> f2)*/ {
  QMainWindow::DockOption f1 = *(QMainWindow::DockOption*)this_; QFlags<QMainWindow::DockOption> f2 = *(QFlags<QMainWindow::DockOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QMainWindow::DockOption> (*)(QMainWindow::DockOption, QFlags<QMainWindow::DockOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:118
// [4] QIncompatibleFlag operator|(QFontDialog::FontDialogOptions::enum_type, int) 
// (12)qm3228640020 (38)_ZorN11QFontDialog16FontDialogOptionEi
/*void qm3228640020_415(QFontDialog::FontDialogOption f1, int f2)*/ {
  QFontDialog::FontDialogOption f1 = *(QFontDialog::FontDialogOption*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QFontDialog::FontDialogOption, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:118
// [4] QFlags<QFontDialog::FontDialogOptions::enum_type> operator|(QFontDialog::FontDialogOptions::enum_type, QFontDialog::FontDialogOptions::enum_type) 
// (12)qm3229511289 (40)_ZorN11QFontDialog16FontDialogOptionES0_
/*void qm3229511289_416(QFontDialog::FontDialogOption f1, QFontDialog::FontDialogOption f2)*/ {
  QFontDialog::FontDialogOption f1 = *(QFontDialog::FontDialogOption*)this_; QFontDialog::FontDialogOption f2 = *(QFontDialog::FontDialogOption*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QFontDialog::FontDialogOption> (*)(QFontDialog::FontDialogOption, QFontDialog::FontDialogOption) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfontdialog.h:118
// [4] QFlags<QFontDialog::FontDialogOptions::enum_type> operator|(QFontDialog::FontDialogOptions::enum_type, QFlags<QFontDialog::FontDialogOptions::enum_type>) 
// (12)qm3738421848 (49)_ZorN11QFontDialog16FontDialogOptionE6QFlagsIS0_E
/*void qm3738421848_417(QFontDialog::FontDialogOption f1, QFlags<QFontDialog::FontDialogOption> f2)*/ {
  QFontDialog::FontDialogOption f1 = *(QFontDialog::FontDialogOption*)this_; QFlags<QFontDialog::FontDialogOption> f2 = *(QFlags<QFontDialog::FontDialogOption>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QFontDialog::FontDialogOption> (*)(QFontDialog::FontDialogOption, QFlags<QFontDialog::FontDialogOption>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:335
// [4] QIncompatibleFlag operator|(QFileDialog::Options::enum_type, int) 
// (12)qm3113839809 (27)_ZorN11QFileDialog6OptionEi
/*void qm3113839809_418(QFileDialog::Option f1, int f2)*/ {
  QFileDialog::Option f1 = *(QFileDialog::Option*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QFileDialog::Option, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:335
// [4] QFlags<QFileDialog::Options::enum_type> operator|(QFileDialog::Options::enum_type, QFileDialog::Options::enum_type) 
// (12)qm3662838474 (29)_ZorN11QFileDialog6OptionES0_
/*void qm3662838474_419(QFileDialog::Option f1, QFileDialog::Option f2)*/ {
  QFileDialog::Option f1 = *(QFileDialog::Option*)this_; QFileDialog::Option f2 = *(QFileDialog::Option*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QFileDialog::Option> (*)(QFileDialog::Option, QFileDialog::Option) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qfiledialog.h:335
// [4] QFlags<QFileDialog::Options::enum_type> operator|(QFileDialog::Options::enum_type, QFlags<QFileDialog::Options::enum_type>) 
// (12)qm4254825412 (38)_ZorN11QFileDialog6OptionE6QFlagsIS0_E
/*void qm4254825412_420(QFileDialog::Option f1, QFlags<QFileDialog::Option> f2)*/ {
  QFileDialog::Option f1 = *(QFileDialog::Option*)this_; QFlags<QFileDialog::Option> f2 = *(QFlags<QFileDialog::Option>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QFileDialog::Option> (*)(QFileDialog::Option, QFlags<QFileDialog::Option>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:137
// [4] QIncompatibleFlag operator|(QDockWidget::DockWidgetFeatures::enum_type, int) 
// (12)qm1913745085 (39)_ZorN11QDockWidget17DockWidgetFeatureEi
/*void qm1913745085_421(QDockWidget::DockWidgetFeature f1, int f2)*/ {
  QDockWidget::DockWidgetFeature f1 = *(QDockWidget::DockWidgetFeature*)this_; int f2 = *(int*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QIncompatibleFlag (*)(QDockWidget::DockWidgetFeature, int) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:137
// [4] QFlags<QDockWidget::DockWidgetFeatures::enum_type> operator|(QDockWidget::DockWidgetFeatures::enum_type, QDockWidget::DockWidgetFeatures::enum_type) 
// (12)qm3084314260 (41)_ZorN11QDockWidget17DockWidgetFeatureES0_
/*void qm3084314260_422(QDockWidget::DockWidgetFeature f1, QDockWidget::DockWidgetFeature f2)*/ {
  QDockWidget::DockWidgetFeature f1 = *(QDockWidget::DockWidgetFeature*)this_; QDockWidget::DockWidgetFeature f2 = *(QDockWidget::DockWidgetFeature*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QDockWidget::DockWidgetFeature> (*)(QDockWidget::DockWidgetFeature, QDockWidget::DockWidgetFeature) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdockwidget.h:137
// [4] QFlags<QDockWidget::DockWidgetFeatures::enum_type> operator|(QDockWidget::DockWidgetFeatures::enum_type, QFlags<QDockWidget::DockWidgetFeatures::enum_type>) 
// (12)qm4145517307 (50)_ZorN11QDockWidget17DockWidgetFeatureE6QFlagsIS0_E
/*void qm4145517307_423(QDockWidget::DockWidgetFeature f1, QFlags<QDockWidget::DockWidgetFeature> f2)*/ {
  QDockWidget::DockWidgetFeature f1 = *(QDockWidget::DockWidgetFeature*)this_; QFlags<QDockWidget::DockWidgetFeature> f2 = *(QFlags<QDockWidget::DockWidgetFeature>*)this_;
  (void) operator|(f1, f2);
  auto xptr = (QFlags<QDockWidget::DockWidgetFeature> (*)(QDockWidget::DockWidgetFeature, QFlags<QDockWidget::DockWidgetFeature>) ) &operator|;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qsizepolicy.h:68
// [4] uint qHash(QSizePolicy, uint) 
// (12)qm2524179644 (22)_Z5qHash11QSizePolicyj
/*void qm2524179644_24(QSizePolicy key, unsigned int seed)*/ {
  QSizePolicy key = *(QSizePolicy*)this_; unsigned int seed = *(unsigned int*)this_;
  (void) qHash(key, seed);
  auto xptr = (unsigned int (*)(QSizePolicy, unsigned int) ) &qHash;
  fnptrsumval += (uint64_t)(void*)xptr;
}

// Invalid inline Visibility=Default Availability=Available
// /usr/include/qt/QtWidgets/qdrawutil.h:159
// [-2] void qDrawBorderPixmap(QPainter *, const QRect &, const QMargins &, const QPixmap &) 
// (12)qm3904681518 (60)_Z17qDrawBorderPixmapP8QPainterRK5QRectRK8QMarginsRK7QPixmap
/*void qm3904681518(QPainter * painter, const QRect & target, const QMargins & margins, const QPixmap & pixmap)*/ {
  QPainter * painter = *(QPainter **)this_; const QRect & target = *(const QRect *)this_; const QMargins & margins = *(const QMargins *)this_; const QPixmap & pixmap = *(const QPixmap *)this_;
  (void) qDrawBorderPixmap(painter, target, margins, pixmap);
  auto xptr = (void (*)(QPainter*, QRect const&, QMargins const&, QPixmap const&) ) &qDrawBorderPixmap;
  fnptrsumval += (uint64_t)(void*)xptr;
}

  return fnptrsumval;
} // void ensure_inline_symbol_widgets

//  main block end
