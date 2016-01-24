// auto generated, do not modify.
// created: Sun Jan 24 17:25:06 2016
// src-file: /QtWidgets/qheaderview.h
// dst-file: /src/widgets/qheaderview.cxx
//

// header block begin =>
#include <qatomic.h>
#include <qstring.h>
#include <qfuture.h>
#include <qpoint.h>
#include <qurl.h>
#include <qopengl.h>
#include <qheaderview.h>


#include <qsize.h>
#include <qbytearray.h>
#include <qnamespace.h>
// <= header block end

// main block begin =>
void __keep_qheaderview_inline_symbols() {
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 102, column 17>
//   // proto:  void QHeaderView::hideSection(int logicalIndex);
if (true) {
  auto f = [](QHeaderView flythis, int arg1) {
    ((QHeaderView*)0)->hideSection(arg1);
    flythis.hideSection(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QHeaderView11hideSectionEi hideSection(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 87, column 16>
//   // proto:  int QHeaderView::logicalIndexAt(const QPoint & pos);
if (true) {
  auto f = [](QHeaderView flythis, const QPoint & arg1) {
    ((QHeaderView*)0)->logicalIndexAt(arg1);
    flythis.logicalIndexAt(arg1);
  };
  if (f == nullptr){}
}
// _ZNK11QHeaderView14logicalIndexAtERK6QPoint logicalIndexAt(const class QPoint &)
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 103, column 17>
//   // proto:  void QHeaderView::showSection(int logicalIndex);
if (true) {
  auto f = [](QHeaderView flythis, int arg1) {
    ((QHeaderView*)0)->showSection(arg1);
    flythis.showSection(arg1);
  };
  if (f == nullptr){}
}
// _ZN11QHeaderView11showSectionEi showSection(int)
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 86, column 16>
//   // proto:  int QHeaderView::logicalIndexAt(int x, int y);
if (true) {
  auto f = [](QHeaderView flythis, int arg1, int arg2) {
    ((QHeaderView*)0)->logicalIndexAt(arg1, arg2);
    flythis.logicalIndexAt(arg1, arg2);
  };
  if (f == nullptr){}
}
// _ZNK11QHeaderView14logicalIndexAtEii logicalIndexAt(int, int)
} // <= main block end

// <= main block end

// use block begin =>
extern "C"
int QHeaderView_Class_Size()
{
  return sizeof(QHeaderView);
}

// <= use block end

// ext block begin =>
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 163, column 9>
//   // proto:  int QHeaderView::maximumSectionSize();
// _ZNK11QHeaderView18maximumSectionSizeEv maximumSectionSize()
extern "C"
int
C_ZNK11QHeaderView18maximumSectionSizeEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->maximumSectionSize();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 79, column 11>
//   // proto:  QSize QHeaderView::sizeHint();
// _ZNK11QHeaderView8sizeHintEv sizeHint()
extern "C"
QSize*
C_ZNK11QHeaderView8sizeHintEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->sizeHint();
  return new QSize(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 90, column 9>
//   // proto:  int QHeaderView::sectionPosition(int logicalIndex);
// _ZNK11QHeaderView15sectionPositionEi sectionPosition(int)
extern "C"
int
C_ZNK11QHeaderView15sectionPositionEi(void *qthis,
int arg1) {
  auto ret =
  ((QHeaderView*)qthis)->sectionPosition(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 188, column 10>
//   // proto:  void QHeaderView::sectionResized(int logicalIndex, int oldSize, int newSize);
// _ZN11QHeaderView14sectionResizedEiii sectionResized(int, int, int)
extern "C"
void
C_ZN11QHeaderView14sectionResizedEiii(void *qthis,
int arg1,
int arg2,
int arg3) {
  ((QHeaderView*)qthis)->sectionResized(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 89, column 9>
//   // proto:  int QHeaderView::sectionSize(int logicalIndex);
// _ZNK11QHeaderView11sectionSizeEi sectionSize(int)
extern "C"
int
C_ZNK11QHeaderView11sectionSizeEi(void *qthis,
int arg1) {
  auto ret =
  ((QHeaderView*)qthis)->sectionSize(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 152, column 10>
//   // proto:  void QHeaderView::setStretchLastSection(bool stretch);
// _ZN11QHeaderView21setStretchLastSectionEb setStretchLastSection(_Bool)
extern "C"
void
C_ZN11QHeaderView21setStretchLastSectionEb(void *qthis,
bool arg1) {
  ((QHeaderView*)qthis)->setStretchLastSection(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 128, column 10>
//   // proto:  void QHeaderView::setSectionResizeMode(int logicalIndex, QHeaderView::ResizeMode mode);
// _ZN11QHeaderView20setSectionResizeModeEiNS_10ResizeModeE setSectionResizeMode(int, enum QHeaderView::ResizeMode)
extern "C"
void
C_ZN11QHeaderView20setSectionResizeModeEiNS_10ResizeModeE(void *qthis,
int arg1,
QHeaderView::ResizeMode arg2) {
  ((QHeaderView*)qthis)->setSectionResizeMode(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 178, column 10>
//   // proto:  void QHeaderView::reset();
// _ZN11QHeaderView5resetEv reset()
extern "C"
void
C_ZN11QHeaderView5resetEv(void *qthis) {
  ((QHeaderView*)qthis)->reset();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 195, column 10>
//   // proto:  void QHeaderView::geometriesChanged();
// _ZN11QHeaderView17geometriesChangedEv geometriesChanged()
extern "C"
void
C_ZN11QHeaderView17geometriesChangedEv(void *qthis) {
  ((QHeaderView*)qthis)->geometriesChanged();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 159, column 10>
//   // proto:  void QHeaderView::resetDefaultSectionSize();
// _ZN11QHeaderView23resetDefaultSectionSizeEv resetDefaultSectionSize()
extern "C"
void
C_ZN11QHeaderView23resetDefaultSectionSizeEv(void *qthis) {
  ((QHeaderView*)qthis)->resetDefaultSectionSize();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 174, column 16>
//   // proto:  QByteArray QHeaderView::saveState();
// _ZNK11QHeaderView9saveStateEv saveState()
extern "C"
QByteArray*
C_ZNK11QHeaderView9saveStateEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->saveState();
  return new QByteArray(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 117, column 10>
//   // proto:  bool QHeaderView::sectionsClickable();
// _ZNK11QHeaderView17sectionsClickableEv sectionsClickable()
extern "C"
bool
C_ZNK11QHeaderView17sectionsClickableEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->sectionsClickable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 127, column 10>
//   // proto:  void QHeaderView::setSectionResizeMode(QHeaderView::ResizeMode mode);
// _ZN11QHeaderView20setSectionResizeModeENS_10ResizeModeE setSectionResizeMode(enum QHeaderView::ResizeMode)
extern "C"
void
C_ZN11QHeaderView20setSectionResizeModeENS_10ResizeModeE(void *qthis,
QHeaderView::ResizeMode arg1) {
  ((QHeaderView*)qthis)->setSectionResizeMode(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 131, column 10>
//   // proto:  int QHeaderView::resizeContentsPrecision();
// _ZNK11QHeaderView23resizeContentsPrecisionEv resizeContentsPrecision()
extern "C"
int
C_ZNK11QHeaderView23resizeContentsPrecisionEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->resizeContentsPrecision();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 182, column 10>
//   // proto:  void QHeaderView::setOffsetToSectionPosition(int visualIndex);
// _ZN11QHeaderView26setOffsetToSectionPositionEi setOffsetToSectionPosition(int)
extern "C"
void
C_ZN11QHeaderView26setOffsetToSectionPositionEi(void *qthis,
int arg1) {
  ((QHeaderView*)qthis)->setOffsetToSectionPosition(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 96, column 10>
//   // proto:  void QHeaderView::resizeSections(QHeaderView::ResizeMode mode);
// _ZN11QHeaderView14resizeSectionsENS_10ResizeModeE resizeSections(class QHeaderView::ResizeMode)
extern "C"
void
C_ZN11QHeaderView14resizeSectionsENS_10ResizeModeE(void *qthis,
QHeaderView::ResizeMode* arg1) {
  ((QHeaderView*)qthis)->resizeSections(*((QHeaderView::ResizeMode*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 78, column 9>
//   // proto:  int QHeaderView::length();
// _ZNK11QHeaderView6lengthEv length()
extern "C"
int
C_ZNK11QHeaderView6lengthEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->length();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 102, column 17>
//   // proto:  void QHeaderView::hideSection(int logicalIndex);
// _ZN11QHeaderView11hideSectionEi hideSection(int)
extern "C"
void
C_ZN11QHeaderView11hideSectionEi(void *qthis,
int arg1) {
  ((QHeaderView*)qthis)->hideSection(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 148, column 9>
//   // proto:  int QHeaderView::sortIndicatorSection();
// _ZNK11QHeaderView20sortIndicatorSectionEv sortIndicatorSection()
extern "C"
int
C_ZNK11QHeaderView20sortIndicatorSectionEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->sortIndicatorSection();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 154, column 10>
//   // proto:  bool QHeaderView::cascadingSectionResizes();
// _ZNK11QHeaderView23cascadingSectionResizesEv cascadingSectionResizes()
extern "C"
bool
C_ZNK11QHeaderView23cascadingSectionResizesEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->cascadingSectionResizes();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 147, column 10>
//   // proto:  void QHeaderView::setSortIndicator(int logicalIndex, Qt::SortOrder order);
// _ZN11QHeaderView16setSortIndicatorEiN2Qt9SortOrderE setSortIndicator(int, Qt::SortOrder)
extern "C"
void
C_ZN11QHeaderView16setSortIndicatorEiN2Qt9SortOrderE(void *qthis,
int arg1,
Qt::SortOrder* arg2) {
  ((QHeaderView*)qthis)->setSortIndicator(arg1,
*((Qt::SortOrder*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 162, column 10>
//   // proto:  void QHeaderView::setMinimumSectionSize(int size);
// _ZN11QHeaderView21setMinimumSectionSizeEi setMinimumSectionSize(int)
extern "C"
void
C_ZN11QHeaderView21setMinimumSectionSizeEi(void *qthis,
int arg1) {
  ((QHeaderView*)qthis)->setMinimumSectionSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 83, column 9>
//   // proto:  int QHeaderView::visualIndexAt(int position);
// _ZNK11QHeaderView13visualIndexAtEi visualIndexAt(int)
extern "C"
int
C_ZNK11QHeaderView13visualIndexAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QHeaderView*)qthis)->visualIndexAt(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 181, column 10>
//   // proto:  void QHeaderView::setOffset(int offset);
// _ZN11QHeaderView9setOffsetEi setOffset(int)
extern "C"
void
C_ZN11QHeaderView9setOffsetEi(void *qthis,
int arg1) {
  ((QHeaderView*)qthis)->setOffset(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 87, column 16>
//   // proto:  int QHeaderView::logicalIndexAt(const QPoint & pos);
// _ZNK11QHeaderView14logicalIndexAtERK6QPoint logicalIndexAt(const class QPoint &)
extern "C"
int
C_ZNK11QHeaderView14logicalIndexAtERK6QPoint(void *qthis,
const QPoint* arg1) {
  auto ret =
  ((QHeaderView*)qthis)->logicalIndexAt(*((const QPoint*)arg1));
  return ret; // 0 TypeKind.INT
}
//   // proto:  void QHeaderView::~QHeaderView();
extern "C"
void C_ZN11QHeaderViewD2Ev(void *qthis) {
  delete (QHeaderView*)qthis;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 91, column 9>
//   // proto:  int QHeaderView::sectionViewportPosition(int logicalIndex);
// _ZNK11QHeaderView23sectionViewportPositionEi sectionViewportPosition(int)
extern "C"
int
C_ZNK11QHeaderView23sectionViewportPositionEi(void *qthis,
int arg1) {
  auto ret =
  ((QHeaderView*)qthis)->sectionViewportPosition(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 124, column 10>
//   // proto:  bool QHeaderView::highlightSections();
// _ZNK11QHeaderView17highlightSectionsEv highlightSections()
extern "C"
bool
C_ZNK11QHeaderView17highlightSectionsEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->highlightSections();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 77, column 9>
//   // proto:  int QHeaderView::offset();
// _ZNK11QHeaderView6offsetEv offset()
extern "C"
int
C_ZNK11QHeaderView6offsetEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->offset();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 144, column 10>
//   // proto:  void QHeaderView::setSortIndicatorShown(bool show);
// _ZN11QHeaderView21setSortIndicatorShownEb setSortIndicatorShown(_Bool)
extern "C"
void
C_ZN11QHeaderView21setSortIndicatorShownEb(void *qthis,
bool arg1) {
  ((QHeaderView*)qthis)->setSortIndicatorShown(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 49, column 5>
//   // proto:  const QMetaObject * QHeaderView::metaObject();
// _ZNK11QHeaderView10metaObjectEv metaObject()
extern "C"
void*
C_ZNK11QHeaderView10metaObjectEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->metaObject();
  return (void*)ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 167, column 10>
//   // proto:  void QHeaderView::setDefaultAlignment(Qt::Alignment alignment);
// _ZN11QHeaderView19setDefaultAlignmentE6QFlagsIN2Qt13AlignmentFlagEE setDefaultAlignment(Qt::Alignment)
extern "C"
void
C_ZN11QHeaderView19setDefaultAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *qthis,
Qt::Alignment* arg1) {
  ((QHeaderView*)qthis)->setDefaultAlignment(*((Qt::Alignment*)arg1));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 103, column 17>
//   // proto:  void QHeaderView::showSection(int logicalIndex);
// _ZN11QHeaderView11showSectionEi showSection(int)
extern "C"
void
C_ZN11QHeaderView11showSectionEi(void *qthis,
int arg1) {
  ((QHeaderView*)qthis)->showSection(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 80, column 10>
//   // proto:  void QHeaderView::setVisible(bool v);
// _ZN11QHeaderView10setVisibleEb setVisible(_Bool)
extern "C"
void
C_ZN11QHeaderView10setVisibleEb(void *qthis,
bool arg1) {
  ((QHeaderView*)qthis)->setVisible(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 100, column 9>
//   // proto:  int QHeaderView::hiddenSectionCount();
// _ZNK11QHeaderView18hiddenSectionCountEv hiddenSectionCount()
extern "C"
int
C_ZNK11QHeaderView18hiddenSectionCountEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->hiddenSectionCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 187, column 10>
//   // proto:  void QHeaderView::sectionMoved(int logicalIndex, int oldVisualIndex, int newVisualIndex);
// _ZN11QHeaderView12sectionMovedEiii sectionMoved(int, int, int)
extern "C"
void
C_ZN11QHeaderView12sectionMovedEiii(void *qthis,
int arg1,
int arg2,
int arg3) {
  ((QHeaderView*)qthis)->sectionMoved(arg1,
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 194, column 10>
//   // proto:  void QHeaderView::sectionHandleDoubleClicked(int logicalIndex);
// _ZN11QHeaderView26sectionHandleDoubleClickedEi sectionHandleDoubleClicked(int)
extern "C"
void
C_ZN11QHeaderView26sectionHandleDoubleClickedEi(void *qthis,
int arg1) {
  ((QHeaderView*)qthis)->sectionHandleDoubleClicked(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 116, column 10>
//   // proto:  void QHeaderView::setSectionsClickable(bool clickable);
// _ZN11QHeaderView20setSectionsClickableEb setSectionsClickable(_Bool)
extern "C"
void
C_ZN11QHeaderView20setSectionsClickableEb(void *qthis,
bool arg1) {
  ((QHeaderView*)qthis)->setSectionsClickable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 189, column 10>
//   // proto:  void QHeaderView::sectionPressed(int logicalIndex);
// _ZN11QHeaderView14sectionPressedEi sectionPressed(int)
extern "C"
void
C_ZN11QHeaderView14sectionPressedEi(void *qthis,
int arg1) {
  ((QHeaderView*)qthis)->sectionPressed(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 130, column 10>
//   // proto:  void QHeaderView::setResizeContentsPrecision(int precision);
// _ZN11QHeaderView26setResizeContentsPrecisionEi setResizeContentsPrecision(int)
extern "C"
void
C_ZN11QHeaderView26setResizeContentsPrecisionEi(void *qthis,
int arg1) {
  ((QHeaderView*)qthis)->setResizeContentsPrecision(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 157, column 9>
//   // proto:  int QHeaderView::defaultSectionSize();
// _ZNK11QHeaderView18defaultSectionSizeEv defaultSectionSize()
extern "C"
int
C_ZNK11QHeaderView18defaultSectionSizeEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->defaultSectionSize();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 183, column 10>
//   // proto:  void QHeaderView::setOffsetToLastSection();
// _ZN11QHeaderView22setOffsetToLastSectionEv setOffsetToLastSection()
extern "C"
void
C_ZN11QHeaderView22setOffsetToLastSectionEv(void *qthis) {
  ((QHeaderView*)qthis)->setOffsetToLastSection();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 94, column 10>
//   // proto:  void QHeaderView::swapSections(int first, int second);
// _ZN11QHeaderView12swapSectionsEii swapSections(int, int)
extern "C"
void
C_ZN11QHeaderView12swapSectionsEii(void *qthis,
int arg1,
int arg2) {
  ((QHeaderView*)qthis)->swapSections(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 126, column 16>
//   // proto:  QHeaderView::ResizeMode QHeaderView::sectionResizeMode(int logicalIndex);
// _ZNK11QHeaderView17sectionResizeModeEi sectionResizeMode(int)
extern "C"
QHeaderView::ResizeMode
C_ZNK11QHeaderView17sectionResizeModeEi(void *qthis,
int arg1) {
  auto ret =
  ((QHeaderView*)qthis)->sectionResizeMode(arg1);
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 76, column 21>
//   // proto:  Qt::Orientation QHeaderView::orientation();
// _ZNK11QHeaderView11orientationEv orientation()
extern "C"
Qt::Orientation
C_ZNK11QHeaderView11orientationEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->orientation();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 105, column 9>
//   // proto:  int QHeaderView::count();
// _ZNK11QHeaderView5countEv count()
extern "C"
int
C_ZNK11QHeaderView5countEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->count();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 106, column 9>
//   // proto:  int QHeaderView::visualIndex(int logicalIndex);
// _ZNK11QHeaderView11visualIndexEi visualIndex(int)
extern "C"
int
C_ZNK11QHeaderView11visualIndexEi(void *qthis,
int arg1) {
  auto ret =
  ((QHeaderView*)qthis)->visualIndex(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 190, column 10>
//   // proto:  void QHeaderView::sectionClicked(int logicalIndex);
// _ZN11QHeaderView14sectionClickedEi sectionClicked(int)
extern "C"
void
C_ZN11QHeaderView14sectionClickedEi(void *qthis,
int arg1) {
  ((QHeaderView*)qthis)->sectionClicked(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 170, column 10>
//   // proto:  bool QHeaderView::sectionsMoved();
// _ZNK11QHeaderView13sectionsMovedEv sectionsMoved()
extern "C"
bool
C_ZNK11QHeaderView13sectionsMovedEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->sectionsMoved();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 142, column 9>
//   // proto:  int QHeaderView::stretchSectionCount();
// _ZNK11QHeaderView19stretchSectionCountEv stretchSectionCount()
extern "C"
int
C_ZNK11QHeaderView19stretchSectionCountEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->stretchSectionCount();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 169, column 10>
//   // proto:  void QHeaderView::doItemsLayout();
// _ZN11QHeaderView13doItemsLayoutEv doItemsLayout()
extern "C"
void
C_ZN11QHeaderView13doItemsLayoutEv(void *qthis) {
  ((QHeaderView*)qthis)->doItemsLayout();
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 109, column 10>
//   // proto:  void QHeaderView::setSectionsMovable(bool movable);
// _ZN11QHeaderView18setSectionsMovableEb setSectionsMovable(_Bool)
extern "C"
void
C_ZN11QHeaderView18setSectionsMovableEb(void *qthis,
bool arg1) {
  ((QHeaderView*)qthis)->setSectionsMovable(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 71, column 14>
//   // proto:  void QHeaderView::QHeaderView(Qt::Orientation orientation, QWidget * parent);
extern "C"
QHeaderView*
C_ZN11QHeaderViewC2EN2Qt11OrientationEP7QWidget(Qt::Orientation* arg1,
QWidget * arg2) {
  auto ret = new QHeaderView(*((Qt::Orientation*)arg1),
arg2);
  return ret;
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 171, column 10>
//   // proto:  bool QHeaderView::sectionsHidden();
// _ZNK11QHeaderView14sectionsHiddenEv sectionsHidden()
extern "C"
bool
C_ZNK11QHeaderView14sectionsHiddenEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->sectionsHidden();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 161, column 9>
//   // proto:  int QHeaderView::minimumSectionSize();
// _ZNK11QHeaderView18minimumSectionSizeEv minimumSectionSize()
extern "C"
int
C_ZNK11QHeaderView18minimumSectionSizeEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->minimumSectionSize();
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 184, column 10>
//   // proto:  void QHeaderView::headerDataChanged(Qt::Orientation orientation, int logicalFirst, int logicalLast);
// _ZN11QHeaderView17headerDataChangedEN2Qt11OrientationEii headerDataChanged(Qt::Orientation, int, int)
extern "C"
void
C_ZN11QHeaderView17headerDataChangedEN2Qt11OrientationEii(void *qthis,
Qt::Orientation* arg1,
int arg2,
int arg3) {
  ((QHeaderView*)qthis)->headerDataChanged(*((Qt::Orientation*)arg1),
arg2,
arg3);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 149, column 19>
//   // proto:  Qt::SortOrder QHeaderView::sortIndicatorOrder();
// _ZNK11QHeaderView18sortIndicatorOrderEv sortIndicatorOrder()
extern "C"
Qt::SortOrder
C_ZNK11QHeaderView18sortIndicatorOrderEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->sortIndicatorOrder();
  return ret; // 0 TypeKind.ENUM
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 155, column 10>
//   // proto:  void QHeaderView::setCascadingSectionResizes(bool enable);
// _ZN11QHeaderView26setCascadingSectionResizesEb setCascadingSectionResizes(_Bool)
extern "C"
void
C_ZN11QHeaderView26setCascadingSectionResizesEb(void *qthis,
bool arg1) {
  ((QHeaderView*)qthis)->setCascadingSectionResizes(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 158, column 10>
//   // proto:  void QHeaderView::setDefaultSectionSize(int size);
// _ZN11QHeaderView21setDefaultSectionSizeEi setDefaultSectionSize(int)
extern "C"
void
C_ZN11QHeaderView21setDefaultSectionSizeEi(void *qthis,
int arg1) {
  ((QHeaderView*)qthis)->setDefaultSectionSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 191, column 10>
//   // proto:  void QHeaderView::sectionEntered(int logicalIndex);
// _ZN11QHeaderView14sectionEnteredEi sectionEntered(int)
extern "C"
void
C_ZN11QHeaderView14sectionEnteredEi(void *qthis,
int arg1) {
  ((QHeaderView*)qthis)->sectionEntered(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 93, column 10>
//   // proto:  void QHeaderView::moveSection(int from, int to);
// _ZN11QHeaderView11moveSectionEii moveSection(int, int)
extern "C"
void
C_ZN11QHeaderView11moveSectionEii(void *qthis,
int arg1,
int arg2) {
  ((QHeaderView*)qthis)->moveSection(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 151, column 10>
//   // proto:  bool QHeaderView::stretchLastSection();
// _ZNK11QHeaderView18stretchLastSectionEv stretchLastSection()
extern "C"
bool
C_ZNK11QHeaderView18stretchLastSectionEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->stretchLastSection();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 196, column 10>
//   // proto:  void QHeaderView::sortIndicatorChanged(int logicalIndex, Qt::SortOrder order);
// _ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE sortIndicatorChanged(int, Qt::SortOrder)
extern "C"
void
C_ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(void *qthis,
int arg1,
Qt::SortOrder* arg2) {
  ((QHeaderView*)qthis)->sortIndicatorChanged(arg1,
*((Qt::SortOrder*)arg2));
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 81, column 9>
//   // proto:  int QHeaderView::sectionSizeHint(int logicalIndex);
// _ZNK11QHeaderView15sectionSizeHintEi sectionSizeHint(int)
extern "C"
int
C_ZNK11QHeaderView15sectionSizeHintEi(void *qthis,
int arg1) {
  auto ret =
  ((QHeaderView*)qthis)->sectionSizeHint(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 110, column 10>
//   // proto:  bool QHeaderView::sectionsMovable();
// _ZNK11QHeaderView15sectionsMovableEv sectionsMovable()
extern "C"
bool
C_ZNK11QHeaderView15sectionsMovableEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->sectionsMovable();
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 98, column 10>
//   // proto:  bool QHeaderView::isSectionHidden(int logicalIndex);
// _ZNK11QHeaderView15isSectionHiddenEi isSectionHidden(int)
extern "C"
bool
C_ZNK11QHeaderView15isSectionHiddenEi(void *qthis,
int arg1) {
  auto ret =
  ((QHeaderView*)qthis)->isSectionHidden(arg1);
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 86, column 16>
//   // proto:  int QHeaderView::logicalIndexAt(int x, int y);
// _ZNK11QHeaderView14logicalIndexAtEii logicalIndexAt(int, int)
extern "C"
int
C_ZNK11QHeaderView14logicalIndexAtEii(void *qthis,
int arg1,
int arg2) {
  auto ret =
  ((QHeaderView*)qthis)->logicalIndexAt(arg1,
arg2);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 84, column 9>
//   // proto:  int QHeaderView::logicalIndexAt(int position);
// _ZNK11QHeaderView14logicalIndexAtEi logicalIndexAt(int)
extern "C"
int
C_ZNK11QHeaderView14logicalIndexAtEi(void *qthis,
int arg1) {
  auto ret =
  ((QHeaderView*)qthis)->logicalIndexAt(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 107, column 9>
//   // proto:  int QHeaderView::logicalIndex(int visualIndex);
// _ZNK11QHeaderView12logicalIndexEi logicalIndex(int)
extern "C"
int
C_ZNK11QHeaderView12logicalIndexEi(void *qthis,
int arg1) {
  auto ret =
  ((QHeaderView*)qthis)->logicalIndex(arg1);
  return ret; // 0 TypeKind.INT
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 164, column 10>
//   // proto:  void QHeaderView::setMaximumSectionSize(int size);
// _ZN11QHeaderView21setMaximumSectionSizeEi setMaximumSectionSize(int)
extern "C"
void
C_ZN11QHeaderView21setMaximumSectionSizeEi(void *qthis,
int arg1) {
  ((QHeaderView*)qthis)->setMaximumSectionSize(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 123, column 10>
//   // proto:  void QHeaderView::setHighlightSections(bool highlight);
// _ZN11QHeaderView20setHighlightSectionsEb setHighlightSections(_Bool)
extern "C"
void
C_ZN11QHeaderView20setHighlightSectionsEb(void *qthis,
bool arg1) {
  ((QHeaderView*)qthis)->setHighlightSections(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 99, column 10>
//   // proto:  void QHeaderView::setSectionHidden(int logicalIndex, bool hide);
// _ZN11QHeaderView16setSectionHiddenEib setSectionHidden(int, _Bool)
extern "C"
void
C_ZN11QHeaderView16setSectionHiddenEib(void *qthis,
int arg1,
bool arg2) {
  ((QHeaderView*)qthis)->setSectionHidden(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 95, column 10>
//   // proto:  void QHeaderView::resizeSection(int logicalIndex, int size);
// _ZN11QHeaderView13resizeSectionEii resizeSection(int, int)
extern "C"
void
C_ZN11QHeaderView13resizeSectionEii(void *qthis,
int arg1,
int arg2) {
  ((QHeaderView*)qthis)->resizeSection(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 175, column 10>
//   // proto:  bool QHeaderView::restoreState(const QByteArray & state);
// _ZN11QHeaderView12restoreStateERK10QByteArray restoreState(const class QByteArray &)
extern "C"
bool
C_ZN11QHeaderView12restoreStateERK10QByteArray(void *qthis,
const QByteArray* arg1) {
  auto ret =
  ((QHeaderView*)qthis)->restoreState(*((const QByteArray*)arg1));
  return ret; // 0 TypeKind.BOOL
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 192, column 10>
//   // proto:  void QHeaderView::sectionDoubleClicked(int logicalIndex);
// _ZN11QHeaderView20sectionDoubleClickedEi sectionDoubleClicked(int)
extern "C"
void
C_ZN11QHeaderView20sectionDoubleClickedEi(void *qthis,
int arg1) {
  ((QHeaderView*)qthis)->sectionDoubleClicked(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 166, column 19>
//   // proto:  Qt::Alignment QHeaderView::defaultAlignment();
// _ZNK11QHeaderView16defaultAlignmentEv defaultAlignment()
extern "C"
QFlags<Qt::AlignmentFlag>*
C_ZNK11QHeaderView16defaultAlignmentEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->defaultAlignment();
  return new QFlags<Qt::AlignmentFlag>(ret); // 5
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 193, column 10>
//   // proto:  void QHeaderView::sectionCountChanged(int oldCount, int newCount);
// _ZN11QHeaderView19sectionCountChangedEii sectionCountChanged(int, int)
extern "C"
void
C_ZN11QHeaderView19sectionCountChangedEii(void *qthis,
int arg1,
int arg2) {
  ((QHeaderView*)qthis)->sectionCountChanged(arg1,
arg2);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 74, column 10>
//   // proto:  void QHeaderView::setModel(QAbstractItemModel * model);
// _ZN11QHeaderView8setModelEP18QAbstractItemModel setModel(class QAbstractItemModel *)
extern "C"
void
C_ZN11QHeaderView8setModelEP18QAbstractItemModel(void *qthis,
QAbstractItemModel * arg1) {
  ((QHeaderView*)qthis)->setModel(arg1);
}
// <SourceLocation file '/usr/include/qt/QtWidgets/qheaderview.h', line 145, column 10>
//   // proto:  bool QHeaderView::isSortIndicatorShown();
// _ZNK11QHeaderView20isSortIndicatorShownEv isSortIndicatorShown()
extern "C"
bool
C_ZNK11QHeaderView20isSortIndicatorShownEv(void *qthis) {
  auto ret =
  ((QHeaderView*)qthis)->isSortIndicatorShown();
  return ret; // 0 TypeKind.BOOL
}
// <= ext block end

// body block begin =>
// QHeaderView_SlotProxy here
class QHeaderView_SlotProxy : public QObject
{
  Q_OBJECT;
public:
   QHeaderView_SlotProxy():QObject(){}

public slots:
  // sectionEntered(int)
  void slot_proxy_func__ZN11QHeaderView14sectionEnteredEi(int arg0);
public:
  void (*slot_func__ZN11QHeaderView14sectionEnteredEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // geometriesChanged()
  void slot_proxy_func__ZN11QHeaderView17geometriesChangedEv();
public:
  void (*slot_func__ZN11QHeaderView17geometriesChangedEv)(void* rsfptr) = NULL;
public slots:
  // sectionClicked(int)
  void slot_proxy_func__ZN11QHeaderView14sectionClickedEi(int arg0);
public:
  void (*slot_func__ZN11QHeaderView14sectionClickedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // sectionMoved(int, int, int)
  void slot_proxy_func__ZN11QHeaderView12sectionMovedEiii(int arg0, int arg1, int arg2);
public:
  void (*slot_func__ZN11QHeaderView12sectionMovedEiii)(void* rsfptr, int arg0, int arg1, int arg2) = NULL;
public slots:
  // sectionPressed(int)
  void slot_proxy_func__ZN11QHeaderView14sectionPressedEi(int arg0);
public:
  void (*slot_func__ZN11QHeaderView14sectionPressedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // sectionDoubleClicked(int)
  void slot_proxy_func__ZN11QHeaderView20sectionDoubleClickedEi(int arg0);
public:
  void (*slot_func__ZN11QHeaderView20sectionDoubleClickedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // sectionHandleDoubleClicked(int)
  void slot_proxy_func__ZN11QHeaderView26sectionHandleDoubleClickedEi(int arg0);
public:
  void (*slot_func__ZN11QHeaderView26sectionHandleDoubleClickedEi)(void* rsfptr, int arg0) = NULL;
public slots:
  // sectionResized(int, int, int)
  void slot_proxy_func__ZN11QHeaderView14sectionResizedEiii(int arg0, int arg1, int arg2);
public:
  void (*slot_func__ZN11QHeaderView14sectionResizedEiii)(void* rsfptr, int arg0, int arg1, int arg2) = NULL;
public slots:
  // sectionCountChanged(int, int)
  void slot_proxy_func__ZN11QHeaderView19sectionCountChangedEii(int arg0, int arg1);
public:
  void (*slot_func__ZN11QHeaderView19sectionCountChangedEii)(void* rsfptr, int arg0, int arg1) = NULL;
public slots:
  // sortIndicatorChanged(int, Qt::SortOrder)
  void slot_proxy_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(int arg0, Qt::SortOrder arg1);
public:
  void (*slot_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE)(void* rsfptr, int arg0, Qt::SortOrder arg1) = NULL;
public: void* rsfptr = NULL;
};
#include "src/widgets/qheaderview.moc"

extern "C" {
  QHeaderView_SlotProxy* QHeaderView_SlotProxy_new()
  {
    return new QHeaderView_SlotProxy();
  }
};

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView14sectionEnteredEi(int arg0) {
  if (this->slot_func__ZN11QHeaderView14sectionEnteredEi != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView14sectionEnteredEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView14sectionEnteredEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView14sectionEnteredEi = (decltype(that->slot_func__ZN11QHeaderView14sectionEnteredEi))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionEntered(int)), that, SLOT(slot_proxy_func__ZN11QHeaderView14sectionEnteredEi(int arg0)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView14sectionEnteredEi(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView17geometriesChangedEv() {
  if (this->slot_func__ZN11QHeaderView17geometriesChangedEv != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView17geometriesChangedEv(this->rsfptr);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView17geometriesChangedEv(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView17geometriesChangedEv = (decltype(that->slot_func__ZN11QHeaderView17geometriesChangedEv))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(geometriesChanged()), that, SLOT(slot_proxy_func__ZN11QHeaderView17geometriesChangedEv()));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView17geometriesChangedEv(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView14sectionClickedEi(int arg0) {
  if (this->slot_func__ZN11QHeaderView14sectionClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView14sectionClickedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView14sectionClickedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView14sectionClickedEi = (decltype(that->slot_func__ZN11QHeaderView14sectionClickedEi))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionClicked(int)), that, SLOT(slot_proxy_func__ZN11QHeaderView14sectionClickedEi(int arg0)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView14sectionClickedEi(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView12sectionMovedEiii(int arg0, int arg1, int arg2) {
  if (this->slot_func__ZN11QHeaderView12sectionMovedEiii != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView12sectionMovedEiii(this->rsfptr, arg0, arg1, arg2);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView12sectionMovedEiii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView12sectionMovedEiii = (decltype(that->slot_func__ZN11QHeaderView12sectionMovedEiii))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionMoved(int, int, int)), that, SLOT(slot_proxy_func__ZN11QHeaderView12sectionMovedEiii(int arg0, int arg1, int arg2)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView12sectionMovedEiii(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView14sectionPressedEi(int arg0) {
  if (this->slot_func__ZN11QHeaderView14sectionPressedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView14sectionPressedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView14sectionPressedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView14sectionPressedEi = (decltype(that->slot_func__ZN11QHeaderView14sectionPressedEi))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionPressed(int)), that, SLOT(slot_proxy_func__ZN11QHeaderView14sectionPressedEi(int arg0)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView14sectionPressedEi(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView20sectionDoubleClickedEi(int arg0) {
  if (this->slot_func__ZN11QHeaderView20sectionDoubleClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView20sectionDoubleClickedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView20sectionDoubleClickedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView20sectionDoubleClickedEi = (decltype(that->slot_func__ZN11QHeaderView20sectionDoubleClickedEi))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionDoubleClicked(int)), that, SLOT(slot_proxy_func__ZN11QHeaderView20sectionDoubleClickedEi(int arg0)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView20sectionDoubleClickedEi(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView26sectionHandleDoubleClickedEi(int arg0) {
  if (this->slot_func__ZN11QHeaderView26sectionHandleDoubleClickedEi != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView26sectionHandleDoubleClickedEi(this->rsfptr, arg0);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView26sectionHandleDoubleClickedEi(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView26sectionHandleDoubleClickedEi = (decltype(that->slot_func__ZN11QHeaderView26sectionHandleDoubleClickedEi))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionHandleDoubleClicked(int)), that, SLOT(slot_proxy_func__ZN11QHeaderView26sectionHandleDoubleClickedEi(int arg0)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView26sectionHandleDoubleClickedEi(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView14sectionResizedEiii(int arg0, int arg1, int arg2) {
  if (this->slot_func__ZN11QHeaderView14sectionResizedEiii != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView14sectionResizedEiii(this->rsfptr, arg0, arg1, arg2);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView14sectionResizedEiii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView14sectionResizedEiii = (decltype(that->slot_func__ZN11QHeaderView14sectionResizedEiii))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionResized(int, int, int)), that, SLOT(slot_proxy_func__ZN11QHeaderView14sectionResizedEiii(int arg0, int arg1, int arg2)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView14sectionResizedEiii(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView19sectionCountChangedEii(int arg0, int arg1) {
  if (this->slot_func__ZN11QHeaderView19sectionCountChangedEii != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView19sectionCountChangedEii(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView19sectionCountChangedEii(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView19sectionCountChangedEii = (decltype(that->slot_func__ZN11QHeaderView19sectionCountChangedEii))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sectionCountChanged(int, int)), that, SLOT(slot_proxy_func__ZN11QHeaderView19sectionCountChangedEii(int arg0, int arg1)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView19sectionCountChangedEii(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

void QHeaderView_SlotProxy::slot_proxy_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(int arg0, Qt::SortOrder arg1) {
  if (this->slot_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE != NULL) {
    // do smth...
    this->slot_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(this->rsfptr, arg0, arg1);
  }
}
extern "C"
void* QHeaderView_SlotProxy_connect__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(QObject* sender, void* ffifptr, void* rsfptr){
  auto that = new QHeaderView_SlotProxy();
  that->rsfptr = rsfptr;
  that->slot_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE = (decltype(that->slot_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE))ffifptr;
  QObject::connect((QHeaderView*)sender, SIGNAL(sortIndicatorChanged(int, Qt::SortOrder)), that, SLOT(slot_proxy_func__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(int arg0, Qt::SortOrder arg1)));
  return that;
}
extern "C"
void QHeaderView_SlotProxy_disconnect__ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(QHeaderView_SlotProxy* that) {
  that->disconnect();
  delete that;
}

// <= body block end

