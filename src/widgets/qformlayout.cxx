//  header block begin
// /usr/include/qt/QtWidgets/qformlayout.h
#include <qformlayout.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qformlayout.h:52
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QFormLayout10metaObjectEv(void *this_) {
  /*return*/ ((QFormLayout*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qformlayout.h:83
// void QFormLayout(class QWidget *)
extern "C"
void* C_ZN11QFormLayoutC1EP7QWidget(QWidget * parent) {
  return new QFormLayout(parent);
}
// virtual
// /usr/include/qt/QtWidgets/qformlayout.h:84
// void ~QFormLayout()
extern "C"
void C_ZN11QFormLayoutD1Ev(void *this_) {
  delete (QFormLayout*)(this_);
}
// /usr/include/qt/QtWidgets/qformlayout.h:86
// void setFieldGrowthPolicy(enum QFormLayout::FieldGrowthPolicy)
extern "C"
void C_ZN11QFormLayout20setFieldGrowthPolicyENS_17FieldGrowthPolicyE(void *this_, QFormLayout::FieldGrowthPolicy policy) {
  ((QFormLayout*)this_)->setFieldGrowthPolicy(policy);
}
// /usr/include/qt/QtWidgets/qformlayout.h:87
// QFormLayout::FieldGrowthPolicy fieldGrowthPolicy()
extern "C"
void C_ZNK11QFormLayout17fieldGrowthPolicyEv(void *this_) {
  /*return*/ ((QFormLayout*)this_)->fieldGrowthPolicy();
}
// /usr/include/qt/QtWidgets/qformlayout.h:88
// void setRowWrapPolicy(enum QFormLayout::RowWrapPolicy)
extern "C"
void C_ZN11QFormLayout16setRowWrapPolicyENS_13RowWrapPolicyE(void *this_, QFormLayout::RowWrapPolicy policy) {
  ((QFormLayout*)this_)->setRowWrapPolicy(policy);
}
// /usr/include/qt/QtWidgets/qformlayout.h:89
// QFormLayout::RowWrapPolicy rowWrapPolicy()
extern "C"
void C_ZNK11QFormLayout13rowWrapPolicyEv(void *this_) {
  /*return*/ ((QFormLayout*)this_)->rowWrapPolicy();
}
// /usr/include/qt/QtWidgets/qformlayout.h:90
// void setLabelAlignment(Qt::Alignment)
extern "C"
void C_ZN11QFormLayout17setLabelAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QFormLayout*)this_)->setLabelAlignment(alignment);
}
// /usr/include/qt/QtWidgets/qformlayout.h:91
// Qt::Alignment labelAlignment()
extern "C"
void C_ZNK11QFormLayout14labelAlignmentEv(void *this_) {
  /*return*/ ((QFormLayout*)this_)->labelAlignment();
}
// /usr/include/qt/QtWidgets/qformlayout.h:92
// void setFormAlignment(Qt::Alignment)
extern "C"
void C_ZN11QFormLayout16setFormAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QFormLayout*)this_)->setFormAlignment(alignment);
}
// /usr/include/qt/QtWidgets/qformlayout.h:93
// Qt::Alignment formAlignment()
extern "C"
void C_ZNK11QFormLayout13formAlignmentEv(void *this_) {
  /*return*/ ((QFormLayout*)this_)->formAlignment();
}
// /usr/include/qt/QtWidgets/qformlayout.h:95
// void setHorizontalSpacing(int)
extern "C"
void C_ZN11QFormLayout20setHorizontalSpacingEi(void *this_, int spacing) {
  ((QFormLayout*)this_)->setHorizontalSpacing(spacing);
}
// /usr/include/qt/QtWidgets/qformlayout.h:96
// int horizontalSpacing()
extern "C"
void C_ZNK11QFormLayout17horizontalSpacingEv(void *this_) {
  /*return*/ ((QFormLayout*)this_)->horizontalSpacing();
}
// /usr/include/qt/QtWidgets/qformlayout.h:97
// void setVerticalSpacing(int)
extern "C"
void C_ZN11QFormLayout18setVerticalSpacingEi(void *this_, int spacing) {
  ((QFormLayout*)this_)->setVerticalSpacing(spacing);
}
// /usr/include/qt/QtWidgets/qformlayout.h:98
// int verticalSpacing()
extern "C"
void C_ZNK11QFormLayout15verticalSpacingEv(void *this_) {
  /*return*/ ((QFormLayout*)this_)->verticalSpacing();
}
// /usr/include/qt/QtWidgets/qformlayout.h:100
// int spacing()
extern "C"
void C_ZNK11QFormLayout7spacingEv(void *this_) {
  /*return*/ ((QFormLayout*)this_)->spacing();
}
// /usr/include/qt/QtWidgets/qformlayout.h:101
// void setSpacing(int)
extern "C"
void C_ZN11QFormLayout10setSpacingEi(void *this_, int arg0) {
  ((QFormLayout*)this_)->setSpacing(arg0);
}
// /usr/include/qt/QtWidgets/qformlayout.h:103
// void addRow(class QWidget *, class QWidget *)
extern "C"
void C_ZN11QFormLayout6addRowEP7QWidgetS1_(void *this_, QWidget * label, QWidget * field) {
  ((QFormLayout*)this_)->addRow(label, field);
}
// /usr/include/qt/QtWidgets/qformlayout.h:104
// void addRow(class QWidget *, class QLayout *)
extern "C"
void C_ZN11QFormLayout6addRowEP7QWidgetP7QLayout(void *this_, QWidget * label, QLayout * field) {
  ((QFormLayout*)this_)->addRow(label, field);
}
// /usr/include/qt/QtWidgets/qformlayout.h:105
// void addRow(const class QString &, class QWidget *)
extern "C"
void C_ZN11QFormLayout6addRowERK7QStringP7QWidget(void *this_, const QString & labelText, QWidget * field) {
  ((QFormLayout*)this_)->addRow(labelText, field);
}
// /usr/include/qt/QtWidgets/qformlayout.h:106
// void addRow(const class QString &, class QLayout *)
extern "C"
void C_ZN11QFormLayout6addRowERK7QStringP7QLayout(void *this_, const QString & labelText, QLayout * field) {
  ((QFormLayout*)this_)->addRow(labelText, field);
}
// /usr/include/qt/QtWidgets/qformlayout.h:107
// void addRow(class QWidget *)
extern "C"
void C_ZN11QFormLayout6addRowEP7QWidget(void *this_, QWidget * widget) {
  ((QFormLayout*)this_)->addRow(widget);
}
// /usr/include/qt/QtWidgets/qformlayout.h:108
// void addRow(class QLayout *)
extern "C"
void C_ZN11QFormLayout6addRowEP7QLayout(void *this_, QLayout * layout) {
  ((QFormLayout*)this_)->addRow(layout);
}
// /usr/include/qt/QtWidgets/qformlayout.h:110
// void insertRow(int, class QWidget *, class QWidget *)
extern "C"
void C_ZN11QFormLayout9insertRowEiP7QWidgetS1_(void *this_, int row, QWidget * label, QWidget * field) {
  ((QFormLayout*)this_)->insertRow(row, label, field);
}
// /usr/include/qt/QtWidgets/qformlayout.h:111
// void insertRow(int, class QWidget *, class QLayout *)
extern "C"
void C_ZN11QFormLayout9insertRowEiP7QWidgetP7QLayout(void *this_, int row, QWidget * label, QLayout * field) {
  ((QFormLayout*)this_)->insertRow(row, label, field);
}
// /usr/include/qt/QtWidgets/qformlayout.h:112
// void insertRow(int, const class QString &, class QWidget *)
extern "C"
void C_ZN11QFormLayout9insertRowEiRK7QStringP7QWidget(void *this_, int row, const QString & labelText, QWidget * field) {
  ((QFormLayout*)this_)->insertRow(row, labelText, field);
}
// /usr/include/qt/QtWidgets/qformlayout.h:113
// void insertRow(int, const class QString &, class QLayout *)
extern "C"
void C_ZN11QFormLayout9insertRowEiRK7QStringP7QLayout(void *this_, int row, const QString & labelText, QLayout * field) {
  ((QFormLayout*)this_)->insertRow(row, labelText, field);
}
// /usr/include/qt/QtWidgets/qformlayout.h:114
// void insertRow(int, class QWidget *)
extern "C"
void C_ZN11QFormLayout9insertRowEiP7QWidget(void *this_, int row, QWidget * widget) {
  ((QFormLayout*)this_)->insertRow(row, widget);
}
// /usr/include/qt/QtWidgets/qformlayout.h:115
// void insertRow(int, class QLayout *)
extern "C"
void C_ZN11QFormLayout9insertRowEiP7QLayout(void *this_, int row, QLayout * layout) {
  ((QFormLayout*)this_)->insertRow(row, layout);
}
// /usr/include/qt/QtWidgets/qformlayout.h:117
// void setItem(int, enum QFormLayout::ItemRole, class QLayoutItem *)
extern "C"
void C_ZN11QFormLayout7setItemEiNS_8ItemRoleEP11QLayoutItem(void *this_, int row, QFormLayout::ItemRole role, QLayoutItem * item) {
  ((QFormLayout*)this_)->setItem(row, role, item);
}
// /usr/include/qt/QtWidgets/qformlayout.h:118
// void setWidget(int, enum QFormLayout::ItemRole, class QWidget *)
extern "C"
void C_ZN11QFormLayout9setWidgetEiNS_8ItemRoleEP7QWidget(void *this_, int row, QFormLayout::ItemRole role, QWidget * widget) {
  ((QFormLayout*)this_)->setWidget(row, role, widget);
}
// /usr/include/qt/QtWidgets/qformlayout.h:119
// void setLayout(int, enum QFormLayout::ItemRole, class QLayout *)
extern "C"
void C_ZN11QFormLayout9setLayoutEiNS_8ItemRoleEP7QLayout(void *this_, int row, QFormLayout::ItemRole role, QLayout * layout) {
  ((QFormLayout*)this_)->setLayout(row, role, layout);
}
// /usr/include/qt/QtWidgets/qformlayout.h:121
// QLayoutItem * itemAt(int, enum QFormLayout::ItemRole)
extern "C"
void C_ZNK11QFormLayout6itemAtEiNS_8ItemRoleE(void *this_, int row, QFormLayout::ItemRole role) {
  /*return*/ ((QFormLayout*)this_)->itemAt(row, role);
}
// /usr/include/qt/QtWidgets/qformlayout.h:122
// void getItemPosition(int, int *, enum QFormLayout::ItemRole *)
extern "C"
void C_ZNK11QFormLayout15getItemPositionEiPiPNS_8ItemRoleE(void *this_, int index, int * rowPtr, QFormLayout::ItemRole * rolePtr) {
  ((QFormLayout*)this_)->getItemPosition(index, rowPtr, rolePtr);
}
// /usr/include/qt/QtWidgets/qformlayout.h:123
// void getWidgetPosition(class QWidget *, int *, enum QFormLayout::ItemRole *)
extern "C"
void C_ZNK11QFormLayout17getWidgetPositionEP7QWidgetPiPNS_8ItemRoleE(void *this_, QWidget * widget, int * rowPtr, QFormLayout::ItemRole * rolePtr) {
  ((QFormLayout*)this_)->getWidgetPosition(widget, rowPtr, rolePtr);
}
// /usr/include/qt/QtWidgets/qformlayout.h:124
// void getLayoutPosition(class QLayout *, int *, enum QFormLayout::ItemRole *)
extern "C"
void C_ZNK11QFormLayout17getLayoutPositionEP7QLayoutPiPNS_8ItemRoleE(void *this_, QLayout * layout, int * rowPtr, QFormLayout::ItemRole * rolePtr) {
  ((QFormLayout*)this_)->getLayoutPosition(layout, rowPtr, rolePtr);
}
// /usr/include/qt/QtWidgets/qformlayout.h:125
// QWidget * labelForField(class QWidget *)
extern "C"
void C_ZNK11QFormLayout13labelForFieldEP7QWidget(void *this_, QWidget * field) {
  /*return*/ ((QFormLayout*)this_)->labelForField(field);
}
// /usr/include/qt/QtWidgets/qformlayout.h:126
// QWidget * labelForField(class QLayout *)
extern "C"
void C_ZNK11QFormLayout13labelForFieldEP7QLayout(void *this_, QLayout * field) {
  /*return*/ ((QFormLayout*)this_)->labelForField(field);
}
// virtual
// /usr/include/qt/QtWidgets/qformlayout.h:129
// void addItem(class QLayoutItem *)
extern "C"
void C_ZN11QFormLayout7addItemEP11QLayoutItem(void *this_, QLayoutItem * item) {
  ((QFormLayout*)this_)->addItem(item);
}
// virtual
// /usr/include/qt/QtWidgets/qformlayout.h:130
// QLayoutItem * itemAt(int)
extern "C"
void C_ZNK11QFormLayout6itemAtEi(void *this_, int index) {
  /*return*/ ((QFormLayout*)this_)->itemAt(index);
}
// virtual
// /usr/include/qt/QtWidgets/qformlayout.h:131
// QLayoutItem * takeAt(int)
extern "C"
void C_ZN11QFormLayout6takeAtEi(void *this_, int index) {
  /*return*/ ((QFormLayout*)this_)->takeAt(index);
}
// virtual
// /usr/include/qt/QtWidgets/qformlayout.h:133
// void setGeometry(const class QRect &)
extern "C"
void C_ZN11QFormLayout11setGeometryERK5QRect(void *this_, const QRect & rect) {
  ((QFormLayout*)this_)->setGeometry(rect);
}
// virtual
// /usr/include/qt/QtWidgets/qformlayout.h:134
// QSize minimumSize()
extern "C"
void C_ZNK11QFormLayout11minimumSizeEv(void *this_) {
  /*return*/ ((QFormLayout*)this_)->minimumSize();
}
// virtual
// /usr/include/qt/QtWidgets/qformlayout.h:135
// QSize sizeHint()
extern "C"
void C_ZNK11QFormLayout8sizeHintEv(void *this_) {
  /*return*/ ((QFormLayout*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qformlayout.h:136
// void invalidate()
extern "C"
void C_ZN11QFormLayout10invalidateEv(void *this_) {
  ((QFormLayout*)this_)->invalidate();
}
// virtual
// /usr/include/qt/QtWidgets/qformlayout.h:138
// bool hasHeightForWidth()
extern "C"
void C_ZNK11QFormLayout17hasHeightForWidthEv(void *this_) {
  /*return*/ ((QFormLayout*)this_)->hasHeightForWidth();
}
// virtual
// /usr/include/qt/QtWidgets/qformlayout.h:139
// int heightForWidth(int)
extern "C"
void C_ZNK11QFormLayout14heightForWidthEi(void *this_, int width) {
  /*return*/ ((QFormLayout*)this_)->heightForWidth(width);
}
// virtual
// /usr/include/qt/QtWidgets/qformlayout.h:140
// Qt::Orientations expandingDirections()
extern "C"
void C_ZNK11QFormLayout19expandingDirectionsEv(void *this_) {
  /*return*/ ((QFormLayout*)this_)->expandingDirections();
}
// virtual
// /usr/include/qt/QtWidgets/qformlayout.h:141
// int count()
extern "C"
void C_ZNK11QFormLayout5countEv(void *this_) {
  /*return*/ ((QFormLayout*)this_)->count();
}
// /usr/include/qt/QtWidgets/qformlayout.h:143
// int rowCount()
extern "C"
void C_ZNK11QFormLayout8rowCountEv(void *this_) {
  /*return*/ ((QFormLayout*)this_)->rowCount();
}
//  main block end
