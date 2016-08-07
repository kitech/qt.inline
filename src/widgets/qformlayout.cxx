// auto generated, do not modify.
// created: Sun Aug  7 10:37:43 2016
// src-file: /QtWidgets/qformlayout.h
// dst-file: /src/widgets/qformlayout.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qformlayout.h>


#include <qnamespace.h>
#include <qsize.h>
// <= header block end

// main block begin =>
void __keep_qformlayout_inline_symbols() {
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QFormLayout_Class_Size()
{
  return sizeof(QFormLayout);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 93, column 19>
//   // proto:  Qt::Alignment QFormLayout::formAlignment();
// _ZNK11QFormLayout13formAlignmentEv formAlignment()
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZNK11QFormLayout13formAlignmentEv(void *qthis) {
  auto ret =
  ((QFormLayout*)qthis)->formAlignment();
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 140, column 22>
//   // proto:  Qt::Orientations QFormLayout::expandingDirections();
// _ZNK11QFormLayout19expandingDirectionsEv expandingDirections()
extern "C"
QFlags<Qt::Orientation>*
C_ZNK11QFormLayout19expandingDirectionsEv(void *qthis) {
  auto ret =
  ((QFormLayout*)qthis)->expandingDirections();
  return new QFlags<Qt::Orientation>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 96, column 9>
//   // proto:  int QFormLayout::horizontalSpacing();
// _ZNK11QFormLayout17horizontalSpacingEv horizontalSpacing()
extern "C"
int
C_ZNK11QFormLayout17horizontalSpacingEv(void *qthis) {
  auto ret =
  ((QFormLayout*)qthis)->horizontalSpacing();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 122, column 10>
//   // proto:  void QFormLayout::getItemPosition(int index, int * rowPtr, QFormLayout::ItemRole * rolePtr);
// _ZNK11QFormLayout15getItemPositionEiPiPNS_8ItemRoleE getItemPosition(int, int *, enum QFormLayout::ItemRole *)
extern "C"
void
C_ZNK11QFormLayout15getItemPositionEiPiPNS_8ItemRoleE(void *qthis,
int arg1,
int * arg2,
QFormLayout::ItemRole * arg3) {
  ((QFormLayout*)qthis)->getItemPosition(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 117, column 10>
//   // proto:  void QFormLayout::setItem(int row, QFormLayout::ItemRole role, QLayoutItem * item);
// _ZN11QFormLayout7setItemEiNS_8ItemRoleEP11QLayoutItem setItem(int, enum QFormLayout::ItemRole, class QLayoutItem *)
extern "C"
void
C_ZN11QFormLayout7setItemEiNS_8ItemRoleEP11QLayoutItem(void *qthis,
int arg1,
QFormLayout::ItemRole arg2,
QLayoutItem * arg3) {
  ((QFormLayout*)qthis)->setItem(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 92, column 10>
//   // proto:  void QFormLayout::setFormAlignment(Qt::Alignment alignment);
// _ZN11QFormLayout16setFormAlignmentE6QFlagsIN2Qt13AlignmentFlagEE setFormAlignment(Qt::Alignment)
extern "C"
void
C_ZN11QFormLayout16setFormAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
Qt::Alignment* arg1) {
  ((QFormLayout*)qthis)->setFormAlignment(*((Qt::Alignment*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 143, column 9>
//   // proto:  int QFormLayout::rowCount();
// _ZNK11QFormLayout8rowCountEv rowCount()
extern "C"
int
C_ZNK11QFormLayout8rowCountEv(void *qthis) {
  auto ret =
  ((QFormLayout*)qthis)->rowCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 126, column 14>
//   // proto:  QWidget * QFormLayout::labelForField(QLayout * field);
// _ZNK11QFormLayout13labelForFieldEP7QLayout labelForField(class QLayout *)
extern "C"
void*
C_ZNK11QFormLayout13labelForFieldEP7QLayout(void *qthis,
QLayout * arg1) {
  auto ret =
  ((QFormLayout*)qthis)->labelForField(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 106, column 10>
//   // proto:  void QFormLayout::addRow(const QString & labelText, QLayout * field);
// _ZN11QFormLayout6addRowERK7QStringP7QLayout addRow(const class QString &, class QLayout *)
extern "C"
void
C_ZN11QFormLayout6addRowERK7QStringP7QLayout(void *qthis,
const QString* arg1,
QLayout * arg2) {
  ((QFormLayout*)qthis)->addRow(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 91, column 19>
//   // proto:  Qt::Alignment QFormLayout::labelAlignment();
// _ZNK11QFormLayout14labelAlignmentEv labelAlignment()
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZNK11QFormLayout14labelAlignmentEv(void *qthis) {
  auto ret =
  ((QFormLayout*)qthis)->labelAlignment();
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 119, column 10>
//   // proto:  void QFormLayout::setLayout(int row, QFormLayout::ItemRole role, QLayout * layout);
// _ZN11QFormLayout9setLayoutEiNS_8ItemRoleEP7QLayout setLayout(int, enum QFormLayout::ItemRole, class QLayout *)
extern "C"
void
C_ZN11QFormLayout9setLayoutEiNS_8ItemRoleEP7QLayout(void *qthis,
int arg1,
QFormLayout::ItemRole arg2,
QLayout * arg3) {
  ((QFormLayout*)qthis)->setLayout(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 113, column 10>
//   // proto:  void QFormLayout::insertRow(int row, const QString & labelText, QLayout * field);
// _ZN11QFormLayout9insertRowEiRK7QStringP7QLayout insertRow(int, const class QString &, class QLayout *)
extern "C"
void
C_ZN11QFormLayout9insertRowEiRK7QStringP7QLayout(void *qthis,
int arg1,
const QString* arg2,
QLayout * arg3) {
  ((QFormLayout*)qthis)->insertRow(arg1,
*((const QString*)arg2),
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 125, column 14>
//   // proto:  QWidget * QFormLayout::labelForField(QWidget * field);
// _ZNK11QFormLayout13labelForFieldEP7QWidget labelForField(class QWidget *)
extern "C"
void*
C_ZNK11QFormLayout13labelForFieldEP7QWidget(void *qthis,
QWidget * arg1) {
  auto ret =
  ((QFormLayout*)qthis)->labelForField(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 111, column 10>
//   // proto:  void QFormLayout::insertRow(int row, QWidget * label, QLayout * field);
// _ZN11QFormLayout9insertRowEiP7QWidgetP7QLayout insertRow(int, class QWidget *, class QLayout *)
extern "C"
void
C_ZN11QFormLayout9insertRowEiP7QWidgetP7QLayout(void *qthis,
int arg1,
QWidget * arg2,
QLayout * arg3) {
  ((QFormLayout*)qthis)->insertRow(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 124, column 10>
//   // proto:  void QFormLayout::getLayoutPosition(QLayout * layout, int * rowPtr, QFormLayout::ItemRole * rolePtr);
// _ZNK11QFormLayout17getLayoutPositionEP7QLayoutPiPNS_8ItemRoleE getLayoutPosition(class QLayout *, int *, enum QFormLayout::ItemRole *)
extern "C"
void
C_ZNK11QFormLayout17getLayoutPositionEP7QLayoutPiPNS_8ItemRoleE(void *qthis,
QLayout * arg1,
int * arg2,
QFormLayout::ItemRole * arg3) {
  ((QFormLayout*)qthis)->getLayoutPosition(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 141, column 9>
//   // proto:  int QFormLayout::count();
// _ZNK11QFormLayout5countEv count()
extern "C"
int
C_ZNK11QFormLayout5countEv(void *qthis) {
  auto ret =
  ((QFormLayout*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 100, column 9>
//   // proto:  int QFormLayout::spacing();
// _ZNK11QFormLayout7spacingEv spacing()
extern "C"
int
C_ZNK11QFormLayout7spacingEv(void *qthis) {
  auto ret =
  ((QFormLayout*)qthis)->spacing();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 87, column 23>
//   // proto:  QFormLayout::FieldGrowthPolicy QFormLayout::fieldGrowthPolicy();
// _ZNK11QFormLayout17fieldGrowthPolicyEv fieldGrowthPolicy()
extern "C"
QFormLayout::FieldGrowthPolicy
C_ZNK11QFormLayout17fieldGrowthPolicyEv(void *qthis) {
  auto ret =
  ((QFormLayout*)qthis)->fieldGrowthPolicy();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 83, column 14>
//   // proto:  void QFormLayout::QFormLayout(QWidget * parent);
extern "C"
QFormLayout*
C_ZN11QFormLayoutC2EP7QWidget(QWidget * arg1) {
  auto ret = new QFormLayout(arg1);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 90, column 10>
//   // proto:  void QFormLayout::setLabelAlignment(Qt::Alignment alignment);
// _ZN11QFormLayout17setLabelAlignmentE6QFlagsIN2Qt13AlignmentFlagEE setLabelAlignment(Qt::Alignment)
extern "C"
void
C_ZN11QFormLayout17setLabelAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
Qt::Alignment* arg1) {
  ((QFormLayout*)qthis)->setLabelAlignment(*((Qt::Alignment*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 115, column 10>
//   // proto:  void QFormLayout::insertRow(int row, QLayout * layout);
// _ZN11QFormLayout9insertRowEiP7QLayout insertRow(int, class QLayout *)
extern "C"
void
C_ZN11QFormLayout9insertRowEiP7QLayout(void *qthis,
int arg1,
QLayout * arg2) {
  ((QFormLayout*)qthis)->insertRow(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 133, column 10>
//   // proto:  void QFormLayout::setGeometry(const QRect & rect);
// _ZN11QFormLayout11setGeometryERK5QRect setGeometry(const class QRect &)
extern "C"
void
C_ZN11QFormLayout11setGeometryERK5QRect(void *qthis,
const QRect* arg1) {
  ((QFormLayout*)qthis)->setGeometry(*((const QRect*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 97, column 10>
//   // proto:  void QFormLayout::setVerticalSpacing(int spacing);
// _ZN11QFormLayout18setVerticalSpacingEi setVerticalSpacing(int)
extern "C"
void
C_ZN11QFormLayout18setVerticalSpacingEi(void *qthis,
int arg1) {
  ((QFormLayout*)qthis)->setVerticalSpacing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 95, column 10>
//   // proto:  void QFormLayout::setHorizontalSpacing(int spacing);
// _ZN11QFormLayout20setHorizontalSpacingEi setHorizontalSpacing(int)
extern "C"
void
C_ZN11QFormLayout20setHorizontalSpacingEi(void *qthis,
int arg1) {
  ((QFormLayout*)qthis)->setHorizontalSpacing(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 112, column 10>
//   // proto:  void QFormLayout::insertRow(int row, const QString & labelText, QWidget * field);
// _ZN11QFormLayout9insertRowEiRK7QStringP7QWidget insertRow(int, const class QString &, class QWidget *)
extern "C"
void
C_ZN11QFormLayout9insertRowEiRK7QStringP7QWidget(void *qthis,
int arg1,
const QString* arg2,
QWidget * arg3) {
  ((QFormLayout*)qthis)->insertRow(arg1,
*((const QString*)arg2),
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 52, column 5>
//   // proto:  const QMetaObject * QFormLayout::metaObject();
// _ZNK11QFormLayout10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QFormLayout10metaObjectEv(void *qthis) {
  auto ret =
  ((QFormLayout*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 110, column 10>
//   // proto:  void QFormLayout::insertRow(int row, QWidget * label, QWidget * field);
// _ZN11QFormLayout9insertRowEiP7QWidgetS1_ insertRow(int, class QWidget *, class QWidget *)
extern "C"
void
C_ZN11QFormLayout9insertRowEiP7QWidgetS1_(void *qthis,
int arg1,
QWidget * arg2,
QWidget * arg3) {
  ((QFormLayout*)qthis)->insertRow(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 101, column 10>
//   // proto:  void QFormLayout::setSpacing(int );
// _ZN11QFormLayout10setSpacingEi setSpacing(int)
extern "C"
void
C_ZN11QFormLayout10setSpacingEi(void *qthis,
int arg1) {
  ((QFormLayout*)qthis)->setSpacing(arg1);
}
//   // proto:  void QFormLayout::~QFormLayout();
extern "C"
void C_ZN11QFormLayoutD2Ev(void *qthis) {
  delete (QFormLayout*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 108, column 10>
//   // proto:  void QFormLayout::addRow(QLayout * layout);
// _ZN11QFormLayout6addRowEP7QLayout addRow(class QLayout *)
extern "C"
void
C_ZN11QFormLayout6addRowEP7QLayout(void *qthis,
QLayout * arg1) {
  ((QFormLayout*)qthis)->addRow(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 135, column 11>
//   // proto:  QSize QFormLayout::sizeHint();
// _ZNK11QFormLayout8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK11QFormLayout8sizeHintEv(void *qthis) {
  auto ret =
  ((QFormLayout*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 136, column 10>
//   // proto:  void QFormLayout::invalidate();
// _ZN11QFormLayout10invalidateEv invalidate()
extern "C"
void
C_ZN11QFormLayout10invalidateEv(void *qthis) {
  ((QFormLayout*)qthis)->invalidate();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 118, column 10>
//   // proto:  void QFormLayout::setWidget(int row, QFormLayout::ItemRole role, QWidget * widget);
// _ZN11QFormLayout9setWidgetEiNS_8ItemRoleEP7QWidget setWidget(int, enum QFormLayout::ItemRole, class QWidget *)
extern "C"
void
C_ZN11QFormLayout9setWidgetEiNS_8ItemRoleEP7QWidget(void *qthis,
int arg1,
QFormLayout::ItemRole arg2,
QWidget * arg3) {
  ((QFormLayout*)qthis)->setWidget(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 123, column 10>
//   // proto:  void QFormLayout::getWidgetPosition(QWidget * widget, int * rowPtr, QFormLayout::ItemRole * rolePtr);
// _ZNK11QFormLayout17getWidgetPositionEP7QWidgetPiPNS_8ItemRoleE getWidgetPosition(class QWidget *, int *, enum QFormLayout::ItemRole *)
extern "C"
void
C_ZNK11QFormLayout17getWidgetPositionEP7QWidgetPiPNS_8ItemRoleE(void *qthis,
QWidget * arg1,
int * arg2,
QFormLayout::ItemRole * arg3) {
  ((QFormLayout*)qthis)->getWidgetPosition(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 121, column 18>
//   // proto:  QLayoutItem * QFormLayout::itemAt(int row, QFormLayout::ItemRole role);
// _ZNK11QFormLayout6itemAtEiNS_8ItemRoleE itemAt(int, enum QFormLayout::ItemRole)
extern "C"
void*
C_ZNK11QFormLayout6itemAtEiNS_8ItemRoleE(void *qthis,
int arg1,
QFormLayout::ItemRole arg2) {
  auto ret =
  ((QFormLayout*)qthis)->itemAt(arg1,
arg2);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 88, column 10>
//   // proto:  void QFormLayout::setRowWrapPolicy(QFormLayout::RowWrapPolicy policy);
// _ZN11QFormLayout16setRowWrapPolicyENS_13RowWrapPolicyE setRowWrapPolicy(enum QFormLayout::RowWrapPolicy)
extern "C"
void
C_ZN11QFormLayout16setRowWrapPolicyENS_13RowWrapPolicyE(void *qthis,
QFormLayout::RowWrapPolicy arg1) {
  ((QFormLayout*)qthis)->setRowWrapPolicy(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 130, column 18>
//   // proto:  QLayoutItem * QFormLayout::itemAt(int index);
// _ZNK11QFormLayout6itemAtEi itemAt(int)
extern "C"
void*
C_ZNK11QFormLayout6itemAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QFormLayout*)qthis)->itemAt(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 131, column 18>
//   // proto:  QLayoutItem * QFormLayout::takeAt(int index);
// _ZN11QFormLayout6takeAtEi takeAt(int)
extern "C"
void*
C_ZN11QFormLayout6takeAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QFormLayout*)qthis)->takeAt(arg1);
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 86, column 10>
//   // proto:  void QFormLayout::setFieldGrowthPolicy(QFormLayout::FieldGrowthPolicy policy);
// _ZN11QFormLayout20setFieldGrowthPolicyENS_17FieldGrowthPolicyE setFieldGrowthPolicy(enum QFormLayout::FieldGrowthPolicy)
extern "C"
void
C_ZN11QFormLayout20setFieldGrowthPolicyENS_17FieldGrowthPolicyE(void *qthis,
QFormLayout::FieldGrowthPolicy arg1) {
  ((QFormLayout*)qthis)->setFieldGrowthPolicy(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 105, column 10>
//   // proto:  void QFormLayout::addRow(const QString & labelText, QWidget * field);
// _ZN11QFormLayout6addRowERK7QStringP7QWidget addRow(const class QString &, class QWidget *)
extern "C"
void
C_ZN11QFormLayout6addRowERK7QStringP7QWidget(void *qthis,
const QString* arg1,
QWidget * arg2) {
  ((QFormLayout*)qthis)->addRow(*((const QString*)arg1),
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 134, column 11>
//   // proto:  QSize QFormLayout::minimumSize();
// _ZNK11QFormLayout11minimumSizeEv minimumSize()
extern "C"
QSize*
C_ZNK11QFormLayout11minimumSizeEv(void *qthis) {
  auto ret =
  ((QFormLayout*)qthis)->minimumSize();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 107, column 10>
//   // proto:  void QFormLayout::addRow(QWidget * widget);
// _ZN11QFormLayout6addRowEP7QWidget addRow(class QWidget *)
extern "C"
void
C_ZN11QFormLayout6addRowEP7QWidget(void *qthis,
QWidget * arg1) {
  ((QFormLayout*)qthis)->addRow(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 104, column 10>
//   // proto:  void QFormLayout::addRow(QWidget * label, QLayout * field);
// _ZN11QFormLayout6addRowEP7QWidgetP7QLayout addRow(class QWidget *, class QLayout *)
extern "C"
void
C_ZN11QFormLayout6addRowEP7QWidgetP7QLayout(void *qthis,
QWidget * arg1,
QLayout * arg2) {
  ((QFormLayout*)qthis)->addRow(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 98, column 9>
//   // proto:  int QFormLayout::verticalSpacing();
// _ZNK11QFormLayout15verticalSpacingEv verticalSpacing()
extern "C"
int
C_ZNK11QFormLayout15verticalSpacingEv(void *qthis) {
  auto ret =
  ((QFormLayout*)qthis)->verticalSpacing();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 89, column 19>
//   // proto:  QFormLayout::RowWrapPolicy QFormLayout::rowWrapPolicy();
// _ZNK11QFormLayout13rowWrapPolicyEv rowWrapPolicy()
extern "C"
QFormLayout::RowWrapPolicy
C_ZNK11QFormLayout13rowWrapPolicyEv(void *qthis) {
  auto ret =
  ((QFormLayout*)qthis)->rowWrapPolicy();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 139, column 9>
//   // proto:  int QFormLayout::heightForWidth(int width);
// _ZNK11QFormLayout14heightForWidthEi heightForWidth(int)
extern "C"
int
C_ZNK11QFormLayout14heightForWidthEi(void *qthis,
int arg1) {
  auto ret =
  ((QFormLayout*)qthis)->heightForWidth(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 129, column 10>
//   // proto:  void QFormLayout::addItem(QLayoutItem * item);
// _ZN11QFormLayout7addItemEP11QLayoutItem addItem(class QLayoutItem *)
extern "C"
void
C_ZN11QFormLayout7addItemEP11QLayoutItem(void *qthis,
QLayoutItem * arg1) {
  ((QFormLayout*)qthis)->addItem(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 138, column 10>
//   // proto:  bool QFormLayout::hasHeightForWidth();
// _ZNK11QFormLayout17hasHeightForWidthEv hasHeightForWidth()
extern "C"
bool
C_ZNK11QFormLayout17hasHeightForWidthEv(void *qthis) {
  auto ret =
  ((QFormLayout*)qthis)->hasHeightForWidth();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 114, column 10>
//   // proto:  void QFormLayout::insertRow(int row, QWidget * widget);
// _ZN11QFormLayout9insertRowEiP7QWidget insertRow(int, class QWidget *)
extern "C"
void
C_ZN11QFormLayout9insertRowEiP7QWidget(void *qthis,
int arg1,
QWidget * arg2) {
  ((QFormLayout*)qthis)->insertRow(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qformlayout.h', line 103, column 10>
//   // proto:  void QFormLayout::addRow(QWidget * label, QWidget * field);
// _ZN11QFormLayout6addRowEP7QWidgetS1_ addRow(class QWidget *, class QWidget *)
extern "C"
void
C_ZN11QFormLayout6addRowEP7QWidgetS1_(void *qthis,
QWidget * arg1,
QWidget * arg2) {
  ((QFormLayout*)qthis)->addRow(arg1,
arg2);
}
// <= ext block end

// body block begin =>
// QFormLayout_SlotProxy here
class QFormLayout_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QFormLayout_SlotProxy():QObject(){}

public: void* rsfptr = NULL;
};
#include "src/widgets/qformlayout.moc"

extern "C" {
  QFormLayout_SlotProxy* QFormLayout_SlotProxy_new()
  {
    return new QFormLayout_SlotProxy();
  }
};

// <= body block end

