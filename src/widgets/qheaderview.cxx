//  header block begin
// /usr/include/qt/QtWidgets/qheaderview.h
#include <qheaderview.h>
#include <QtWidgets>

//  header block end

//  main block begin
// virtual
// /usr/include/qt/QtWidgets/qheaderview.h:55
// const QMetaObject * metaObject()
extern "C"
void C_ZNK11QHeaderView10metaObjectEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->metaObject();
}
// /usr/include/qt/QtWidgets/qheaderview.h:77
// void QHeaderView(Qt::Orientation, class QWidget *)
extern "C"
void* C_ZN11QHeaderViewC1EN2Qt11OrientationEP7QWidget(Qt::Orientation orientation, QWidget * parent) {
  return new QHeaderView(orientation, parent);
}
// virtual
// /usr/include/qt/QtWidgets/qheaderview.h:78
// void ~QHeaderView()
extern "C"
void C_ZN11QHeaderViewD1Ev(void *this_) {
  delete (QHeaderView*)(this_);
}
// virtual
// /usr/include/qt/QtWidgets/qheaderview.h:80
// void setModel(class QAbstractItemModel *)
extern "C"
void C_ZN11QHeaderView8setModelEP18QAbstractItemModel(void *this_, QAbstractItemModel * model) {
  ((QHeaderView*)this_)->setModel(model);
}
// /usr/include/qt/QtWidgets/qheaderview.h:82
// Qt::Orientation orientation()
extern "C"
void C_ZNK11QHeaderView11orientationEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->orientation();
}
// /usr/include/qt/QtWidgets/qheaderview.h:83
// int offset()
extern "C"
void C_ZNK11QHeaderView6offsetEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->offset();
}
// /usr/include/qt/QtWidgets/qheaderview.h:84
// int length()
extern "C"
void C_ZNK11QHeaderView6lengthEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->length();
}
// virtual
// /usr/include/qt/QtWidgets/qheaderview.h:85
// QSize sizeHint()
extern "C"
void C_ZNK11QHeaderView8sizeHintEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->sizeHint();
}
// virtual
// /usr/include/qt/QtWidgets/qheaderview.h:86
// void setVisible(_Bool)
extern "C"
void C_ZN11QHeaderView10setVisibleEb(void *this_, bool v) {
  ((QHeaderView*)this_)->setVisible(v);
}
// /usr/include/qt/QtWidgets/qheaderview.h:87
// int sectionSizeHint(int)
extern "C"
void C_ZNK11QHeaderView15sectionSizeHintEi(void *this_, int logicalIndex) {
  /*return*/ ((QHeaderView*)this_)->sectionSizeHint(logicalIndex);
}
// /usr/include/qt/QtWidgets/qheaderview.h:89
// int visualIndexAt(int)
extern "C"
void C_ZNK11QHeaderView13visualIndexAtEi(void *this_, int position) {
  /*return*/ ((QHeaderView*)this_)->visualIndexAt(position);
}
// /usr/include/qt/QtWidgets/qheaderview.h:90
// int logicalIndexAt(int)
extern "C"
void C_ZNK11QHeaderView14logicalIndexAtEi(void *this_, int position) {
  /*return*/ ((QHeaderView*)this_)->logicalIndexAt(position);
}
// inline
// /usr/include/qt/QtWidgets/qheaderview.h:92
// int logicalIndexAt(int, int)
extern "C"
void C_ZNK11QHeaderView14logicalIndexAtEii(void *this_, int x, int y) {
  /*return*/ ((QHeaderView*)this_)->logicalIndexAt(x, y);
}
// inline
// /usr/include/qt/QtWidgets/qheaderview.h:93
// int logicalIndexAt(const class QPoint &)
extern "C"
void C_ZNK11QHeaderView14logicalIndexAtERK6QPoint(void *this_, const QPoint & pos) {
  /*return*/ ((QHeaderView*)this_)->logicalIndexAt(pos);
}
// /usr/include/qt/QtWidgets/qheaderview.h:95
// int sectionSize(int)
extern "C"
void C_ZNK11QHeaderView11sectionSizeEi(void *this_, int logicalIndex) {
  /*return*/ ((QHeaderView*)this_)->sectionSize(logicalIndex);
}
// /usr/include/qt/QtWidgets/qheaderview.h:96
// int sectionPosition(int)
extern "C"
void C_ZNK11QHeaderView15sectionPositionEi(void *this_, int logicalIndex) {
  /*return*/ ((QHeaderView*)this_)->sectionPosition(logicalIndex);
}
// /usr/include/qt/QtWidgets/qheaderview.h:97
// int sectionViewportPosition(int)
extern "C"
void C_ZNK11QHeaderView23sectionViewportPositionEi(void *this_, int logicalIndex) {
  /*return*/ ((QHeaderView*)this_)->sectionViewportPosition(logicalIndex);
}
// /usr/include/qt/QtWidgets/qheaderview.h:99
// void moveSection(int, int)
extern "C"
void C_ZN11QHeaderView11moveSectionEii(void *this_, int from, int to) {
  ((QHeaderView*)this_)->moveSection(from, to);
}
// /usr/include/qt/QtWidgets/qheaderview.h:100
// void swapSections(int, int)
extern "C"
void C_ZN11QHeaderView12swapSectionsEii(void *this_, int first, int second) {
  ((QHeaderView*)this_)->swapSections(first, second);
}
// /usr/include/qt/QtWidgets/qheaderview.h:101
// void resizeSection(int, int)
extern "C"
void C_ZN11QHeaderView13resizeSectionEii(void *this_, int logicalIndex, int size) {
  ((QHeaderView*)this_)->resizeSection(logicalIndex, size);
}
// /usr/include/qt/QtWidgets/qheaderview.h:102
// void resizeSections(class QHeaderView::ResizeMode)
extern "C"
void C_ZN11QHeaderView14resizeSectionsENS_10ResizeModeE(void *this_, QHeaderView::ResizeMode mode) {
  ((QHeaderView*)this_)->resizeSections(mode);
}
// /usr/include/qt/QtWidgets/qheaderview.h:104
// bool isSectionHidden(int)
extern "C"
void C_ZNK11QHeaderView15isSectionHiddenEi(void *this_, int logicalIndex) {
  /*return*/ ((QHeaderView*)this_)->isSectionHidden(logicalIndex);
}
// /usr/include/qt/QtWidgets/qheaderview.h:105
// void setSectionHidden(int, _Bool)
extern "C"
void C_ZN11QHeaderView16setSectionHiddenEib(void *this_, int logicalIndex, bool hide) {
  ((QHeaderView*)this_)->setSectionHidden(logicalIndex, hide);
}
// /usr/include/qt/QtWidgets/qheaderview.h:106
// int hiddenSectionCount()
extern "C"
void C_ZNK11QHeaderView18hiddenSectionCountEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->hiddenSectionCount();
}
// inline
// /usr/include/qt/QtWidgets/qheaderview.h:108
// void hideSection(int)
extern "C"
void C_ZN11QHeaderView11hideSectionEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->hideSection(logicalIndex);
}
// inline
// /usr/include/qt/QtWidgets/qheaderview.h:109
// void showSection(int)
extern "C"
void C_ZN11QHeaderView11showSectionEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->showSection(logicalIndex);
}
// /usr/include/qt/QtWidgets/qheaderview.h:111
// int count()
extern "C"
void C_ZNK11QHeaderView5countEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->count();
}
// /usr/include/qt/QtWidgets/qheaderview.h:112
// int visualIndex(int)
extern "C"
void C_ZNK11QHeaderView11visualIndexEi(void *this_, int logicalIndex) {
  /*return*/ ((QHeaderView*)this_)->visualIndex(logicalIndex);
}
// /usr/include/qt/QtWidgets/qheaderview.h:113
// int logicalIndex(int)
extern "C"
void C_ZNK11QHeaderView12logicalIndexEi(void *this_, int visualIndex) {
  /*return*/ ((QHeaderView*)this_)->logicalIndex(visualIndex);
}
// /usr/include/qt/QtWidgets/qheaderview.h:115
// void setSectionsMovable(_Bool)
extern "C"
void C_ZN11QHeaderView18setSectionsMovableEb(void *this_, bool movable) {
  ((QHeaderView*)this_)->setSectionsMovable(movable);
}
// /usr/include/qt/QtWidgets/qheaderview.h:116
// bool sectionsMovable()
extern "C"
void C_ZNK11QHeaderView15sectionsMovableEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->sectionsMovable();
}
// /usr/include/qt/QtWidgets/qheaderview.h:122
// void setSectionsClickable(_Bool)
extern "C"
void C_ZN11QHeaderView20setSectionsClickableEb(void *this_, bool clickable) {
  ((QHeaderView*)this_)->setSectionsClickable(clickable);
}
// /usr/include/qt/QtWidgets/qheaderview.h:123
// bool sectionsClickable()
extern "C"
void C_ZNK11QHeaderView17sectionsClickableEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->sectionsClickable();
}
// /usr/include/qt/QtWidgets/qheaderview.h:129
// void setHighlightSections(_Bool)
extern "C"
void C_ZN11QHeaderView20setHighlightSectionsEb(void *this_, bool highlight) {
  ((QHeaderView*)this_)->setHighlightSections(highlight);
}
// /usr/include/qt/QtWidgets/qheaderview.h:130
// bool highlightSections()
extern "C"
void C_ZNK11QHeaderView17highlightSectionsEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->highlightSections();
}
// /usr/include/qt/QtWidgets/qheaderview.h:132
// QHeaderView::ResizeMode sectionResizeMode(int)
extern "C"
void C_ZNK11QHeaderView17sectionResizeModeEi(void *this_, int logicalIndex) {
  /*return*/ ((QHeaderView*)this_)->sectionResizeMode(logicalIndex);
}
// /usr/include/qt/QtWidgets/qheaderview.h:133
// void setSectionResizeMode(enum QHeaderView::ResizeMode)
extern "C"
void C_ZN11QHeaderView20setSectionResizeModeENS_10ResizeModeE(void *this_, QHeaderView::ResizeMode mode) {
  ((QHeaderView*)this_)->setSectionResizeMode(mode);
}
// /usr/include/qt/QtWidgets/qheaderview.h:134
// void setSectionResizeMode(int, enum QHeaderView::ResizeMode)
extern "C"
void C_ZN11QHeaderView20setSectionResizeModeEiNS_10ResizeModeE(void *this_, int logicalIndex, QHeaderView::ResizeMode mode) {
  ((QHeaderView*)this_)->setSectionResizeMode(logicalIndex, mode);
}
// /usr/include/qt/QtWidgets/qheaderview.h:136
// void setResizeContentsPrecision(int)
extern "C"
void C_ZN11QHeaderView26setResizeContentsPrecisionEi(void *this_, int precision) {
  ((QHeaderView*)this_)->setResizeContentsPrecision(precision);
}
// /usr/include/qt/QtWidgets/qheaderview.h:137
// int resizeContentsPrecision()
extern "C"
void C_ZNK11QHeaderView23resizeContentsPrecisionEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->resizeContentsPrecision();
}
// /usr/include/qt/QtWidgets/qheaderview.h:148
// int stretchSectionCount()
extern "C"
void C_ZNK11QHeaderView19stretchSectionCountEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->stretchSectionCount();
}
// /usr/include/qt/QtWidgets/qheaderview.h:150
// void setSortIndicatorShown(_Bool)
extern "C"
void C_ZN11QHeaderView21setSortIndicatorShownEb(void *this_, bool show) {
  ((QHeaderView*)this_)->setSortIndicatorShown(show);
}
// /usr/include/qt/QtWidgets/qheaderview.h:151
// bool isSortIndicatorShown()
extern "C"
void C_ZNK11QHeaderView20isSortIndicatorShownEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->isSortIndicatorShown();
}
// /usr/include/qt/QtWidgets/qheaderview.h:153
// void setSortIndicator(int, Qt::SortOrder)
extern "C"
void C_ZN11QHeaderView16setSortIndicatorEiN2Qt9SortOrderE(void *this_, int logicalIndex, Qt::SortOrder order) {
  ((QHeaderView*)this_)->setSortIndicator(logicalIndex, order);
}
// /usr/include/qt/QtWidgets/qheaderview.h:154
// int sortIndicatorSection()
extern "C"
void C_ZNK11QHeaderView20sortIndicatorSectionEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->sortIndicatorSection();
}
// /usr/include/qt/QtWidgets/qheaderview.h:155
// Qt::SortOrder sortIndicatorOrder()
extern "C"
void C_ZNK11QHeaderView18sortIndicatorOrderEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->sortIndicatorOrder();
}
// /usr/include/qt/QtWidgets/qheaderview.h:157
// bool stretchLastSection()
extern "C"
void C_ZNK11QHeaderView18stretchLastSectionEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->stretchLastSection();
}
// /usr/include/qt/QtWidgets/qheaderview.h:158
// void setStretchLastSection(_Bool)
extern "C"
void C_ZN11QHeaderView21setStretchLastSectionEb(void *this_, bool stretch) {
  ((QHeaderView*)this_)->setStretchLastSection(stretch);
}
// /usr/include/qt/QtWidgets/qheaderview.h:160
// bool cascadingSectionResizes()
extern "C"
void C_ZNK11QHeaderView23cascadingSectionResizesEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->cascadingSectionResizes();
}
// /usr/include/qt/QtWidgets/qheaderview.h:161
// void setCascadingSectionResizes(_Bool)
extern "C"
void C_ZN11QHeaderView26setCascadingSectionResizesEb(void *this_, bool enable) {
  ((QHeaderView*)this_)->setCascadingSectionResizes(enable);
}
// /usr/include/qt/QtWidgets/qheaderview.h:163
// int defaultSectionSize()
extern "C"
void C_ZNK11QHeaderView18defaultSectionSizeEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->defaultSectionSize();
}
// /usr/include/qt/QtWidgets/qheaderview.h:164
// void setDefaultSectionSize(int)
extern "C"
void C_ZN11QHeaderView21setDefaultSectionSizeEi(void *this_, int size) {
  ((QHeaderView*)this_)->setDefaultSectionSize(size);
}
// /usr/include/qt/QtWidgets/qheaderview.h:165
// void resetDefaultSectionSize()
extern "C"
void C_ZN11QHeaderView23resetDefaultSectionSizeEv(void *this_) {
  ((QHeaderView*)this_)->resetDefaultSectionSize();
}
// /usr/include/qt/QtWidgets/qheaderview.h:167
// int minimumSectionSize()
extern "C"
void C_ZNK11QHeaderView18minimumSectionSizeEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->minimumSectionSize();
}
// /usr/include/qt/QtWidgets/qheaderview.h:168
// void setMinimumSectionSize(int)
extern "C"
void C_ZN11QHeaderView21setMinimumSectionSizeEi(void *this_, int size) {
  ((QHeaderView*)this_)->setMinimumSectionSize(size);
}
// /usr/include/qt/QtWidgets/qheaderview.h:169
// int maximumSectionSize()
extern "C"
void C_ZNK11QHeaderView18maximumSectionSizeEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->maximumSectionSize();
}
// /usr/include/qt/QtWidgets/qheaderview.h:170
// void setMaximumSectionSize(int)
extern "C"
void C_ZN11QHeaderView21setMaximumSectionSizeEi(void *this_, int size) {
  ((QHeaderView*)this_)->setMaximumSectionSize(size);
}
// /usr/include/qt/QtWidgets/qheaderview.h:172
// Qt::Alignment defaultAlignment()
extern "C"
void C_ZNK11QHeaderView16defaultAlignmentEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->defaultAlignment();
}
// /usr/include/qt/QtWidgets/qheaderview.h:173
// void setDefaultAlignment(Qt::Alignment)
extern "C"
void C_ZN11QHeaderView19setDefaultAlignmentE6QFlagsIN2Qt13AlignmentFlagEE(void *this_, QFlags<Qt::AlignmentFlag> alignment) {
  ((QHeaderView*)this_)->setDefaultAlignment(alignment);
}
// virtual
// /usr/include/qt/QtWidgets/qheaderview.h:175
// void doItemsLayout()
extern "C"
void C_ZN11QHeaderView13doItemsLayoutEv(void *this_) {
  ((QHeaderView*)this_)->doItemsLayout();
}
// /usr/include/qt/QtWidgets/qheaderview.h:176
// bool sectionsMoved()
extern "C"
void C_ZNK11QHeaderView13sectionsMovedEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->sectionsMoved();
}
// /usr/include/qt/QtWidgets/qheaderview.h:177
// bool sectionsHidden()
extern "C"
void C_ZNK11QHeaderView14sectionsHiddenEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->sectionsHidden();
}
// /usr/include/qt/QtWidgets/qheaderview.h:180
// QByteArray saveState()
extern "C"
void C_ZNK11QHeaderView9saveStateEv(void *this_) {
  /*return*/ ((QHeaderView*)this_)->saveState();
}
// /usr/include/qt/QtWidgets/qheaderview.h:181
// bool restoreState(const class QByteArray &)
extern "C"
void C_ZN11QHeaderView12restoreStateERK10QByteArray(void *this_, const QByteArray & state) {
  /*return*/ ((QHeaderView*)this_)->restoreState(state);
}
// virtual
// /usr/include/qt/QtWidgets/qheaderview.h:184
// void reset()
extern "C"
void C_ZN11QHeaderView5resetEv(void *this_) {
  ((QHeaderView*)this_)->reset();
}
// /usr/include/qt/QtWidgets/qheaderview.h:187
// void setOffset(int)
extern "C"
void C_ZN11QHeaderView9setOffsetEi(void *this_, int offset) {
  ((QHeaderView*)this_)->setOffset(offset);
}
// /usr/include/qt/QtWidgets/qheaderview.h:188
// void setOffsetToSectionPosition(int)
extern "C"
void C_ZN11QHeaderView26setOffsetToSectionPositionEi(void *this_, int visualIndex) {
  ((QHeaderView*)this_)->setOffsetToSectionPosition(visualIndex);
}
// /usr/include/qt/QtWidgets/qheaderview.h:189
// void setOffsetToLastSection()
extern "C"
void C_ZN11QHeaderView22setOffsetToLastSectionEv(void *this_) {
  ((QHeaderView*)this_)->setOffsetToLastSection();
}
// /usr/include/qt/QtWidgets/qheaderview.h:190
// void headerDataChanged(Qt::Orientation, int, int)
extern "C"
void C_ZN11QHeaderView17headerDataChangedEN2Qt11OrientationEii(void *this_, Qt::Orientation orientation, int logicalFirst, int logicalLast) {
  ((QHeaderView*)this_)->headerDataChanged(orientation, logicalFirst, logicalLast);
}
// /usr/include/qt/QtWidgets/qheaderview.h:193
// void sectionMoved(int, int, int)
extern "C"
void C_ZN11QHeaderView12sectionMovedEiii(void *this_, int logicalIndex, int oldVisualIndex, int newVisualIndex) {
  ((QHeaderView*)this_)->sectionMoved(logicalIndex, oldVisualIndex, newVisualIndex);
}
// /usr/include/qt/QtWidgets/qheaderview.h:194
// void sectionResized(int, int, int)
extern "C"
void C_ZN11QHeaderView14sectionResizedEiii(void *this_, int logicalIndex, int oldSize, int newSize) {
  ((QHeaderView*)this_)->sectionResized(logicalIndex, oldSize, newSize);
}
// /usr/include/qt/QtWidgets/qheaderview.h:195
// void sectionPressed(int)
extern "C"
void C_ZN11QHeaderView14sectionPressedEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->sectionPressed(logicalIndex);
}
// /usr/include/qt/QtWidgets/qheaderview.h:196
// void sectionClicked(int)
extern "C"
void C_ZN11QHeaderView14sectionClickedEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->sectionClicked(logicalIndex);
}
// /usr/include/qt/QtWidgets/qheaderview.h:197
// void sectionEntered(int)
extern "C"
void C_ZN11QHeaderView14sectionEnteredEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->sectionEntered(logicalIndex);
}
// /usr/include/qt/QtWidgets/qheaderview.h:198
// void sectionDoubleClicked(int)
extern "C"
void C_ZN11QHeaderView20sectionDoubleClickedEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->sectionDoubleClicked(logicalIndex);
}
// /usr/include/qt/QtWidgets/qheaderview.h:199
// void sectionCountChanged(int, int)
extern "C"
void C_ZN11QHeaderView19sectionCountChangedEii(void *this_, int oldCount, int newCount) {
  ((QHeaderView*)this_)->sectionCountChanged(oldCount, newCount);
}
// /usr/include/qt/QtWidgets/qheaderview.h:200
// void sectionHandleDoubleClicked(int)
extern "C"
void C_ZN11QHeaderView26sectionHandleDoubleClickedEi(void *this_, int logicalIndex) {
  ((QHeaderView*)this_)->sectionHandleDoubleClicked(logicalIndex);
}
// /usr/include/qt/QtWidgets/qheaderview.h:201
// void geometriesChanged()
extern "C"
void C_ZN11QHeaderView17geometriesChangedEv(void *this_) {
  ((QHeaderView*)this_)->geometriesChanged();
}
// /usr/include/qt/QtWidgets/qheaderview.h:202
// void sortIndicatorChanged(int, Qt::SortOrder)
extern "C"
void C_ZN11QHeaderView20sortIndicatorChangedEiN2Qt9SortOrderE(void *this_, int logicalIndex, Qt::SortOrder order) {
  ((QHeaderView*)this_)->sortIndicatorChanged(logicalIndex, order);
}
//  main block end
