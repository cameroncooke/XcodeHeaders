//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTOutlineView.h"

#import "DVTInvalidation.h"

@class DVTDelayedInvocation, DVTNotificationToken, DVTStackBacktrace, DVTTimeSlicedMainThreadWorkQueue, IDENavigableItemFilter, NSArray, NSHashTable, NSMapTable, NSMutableArray, NSPredicate, NSSet, NSString, _IDENavigatorOutlineViewDataSource, _IDEOutlineViewGroupInfo;

@interface IDENavigatorOutlineView : DVTOutlineView <DVTInvalidation>
{
    long long _batchRowUpdateCount;
    id _itemBeingFullyReloaded;
    NSHashTable *_unfilteredRootItems;
    DVTDelayedInvocation *_delayedInvocation;
    NSString *_emptyContentStringCopy;
    SEL _keyAction;
    id <IDENavigatorOutlineViewLoadingDelegate> _loadingDelegate;
    _IDEOutlineViewGroupInfo *_groupInfo;
    NSMapTable *_cachedRowItemsToHeights;
    _IDENavigatorOutlineViewDataSource *_interposedDelegate;
    _IDENavigatorOutlineViewDataSource *_interposedDataSource;
    BOOL _isLiveScrolling;
    NSMutableArray *_entriesToRestoreToVisibleRect;
    DVTNotificationToken *_variableRowHeightLiveScrollStartObserver;
    DVTNotificationToken *_variableRowHeightLiveScrollEndObserver;
    DVTDelayedInvocation *_variableRowHeightVisibleRowsHeightCalculatorInvocation;
    struct {
        unsigned int _needsToPushRowSelection:1;
        unsigned int _needsToRefreshBoundSelectedObjects:1;
        unsigned int _needsToRefreshBoundExpandedItems:1;
        unsigned int _suspendRowHeightInvalidation:1;
        unsigned int _doingBatchExpand:1;
        unsigned int _filteringEnabled:1;
        unsigned int _scrollSelectionToVisibleAfterRefreshingSelection:1;
        unsigned int _hasContent:1;
        unsigned int _didDrawContent:1;
        unsigned int _resettingRootItems:1;
        unsigned int _reloadingItems:1;
        unsigned int _didRecieveKeyDownEvent:1;
        unsigned int _didPublishSelectedObjects:1;
        unsigned int _supportsTrackingAreasForCells:1;
        unsigned int _inSameRunloopForTrackingSelectionVisibleRect:1;
        unsigned int _invalidating:1;
    } _idenovFlags;
    BOOL _filteringActive;
    BOOL _supportsVariableHeightCells;
    BOOL _tracksSelectionVisibleRect;
    BOOL _disableSourceListSelectionStyle;
    double _groupHeaderRowHeight;
    IDENavigableItemFilter *_filter;
    NSPredicate *_filterPredicate;
    NSSet *_editorSelectedNavigableItems;
    DVTTimeSlicedMainThreadWorkQueue *_expandingItemsWorkQueue;
    long long _filterProgress;
}

+ (id)keyPathsForValuesAffectingFilteringActive;
+ (id)keyPathsForValuesAffectingEmptyContentString;
+ (unsigned long long)assertionBehaviorForKeyValueObservationsAtEndOfEvent;
+ (void)initialize;
@property(nonatomic) BOOL disableSourceListSelectionStyle; // @synthesize disableSourceListSelectionStyle=_disableSourceListSelectionStyle;
@property(retain) id <IDENavigatorOutlineViewLoadingDelegate> loadingDelegate; // @synthesize loadingDelegate=_loadingDelegate;
@property(readonly) long long filterProgress; // @synthesize filterProgress=_filterProgress;
@property(retain) DVTTimeSlicedMainThreadWorkQueue *expandingItemsWorkQueue; // @synthesize expandingItemsWorkQueue=_expandingItemsWorkQueue;
@property BOOL tracksSelectionVisibleRect; // @synthesize tracksSelectionVisibleRect=_tracksSelectionVisibleRect;
@property(retain, nonatomic) NSSet *editorSelectedNavigableItems; // @synthesize editorSelectedNavigableItems=_editorSelectedNavigableItems;
@property(nonatomic) BOOL supportsVariableHeightCells; // @synthesize supportsVariableHeightCells=_supportsVariableHeightCells;
@property(nonatomic) SEL keyAction; // @synthesize keyAction=_keyAction;
@property(readonly, getter=isFilteringActive) BOOL filteringActive; // @synthesize filteringActive=_filteringActive;
@property(copy, nonatomic) NSPredicate *filterPredicate; // @synthesize filterPredicate=_filterPredicate;
@property(retain, nonatomic) IDENavigableItemFilter *filter; // @synthesize filter=_filter;
@property double groupHeaderRowHeight; // @synthesize groupHeaderRowHeight=_groupHeaderRowHeight;
- (void).cxx_destruct;
- (void)processPendingChanges;
- (void)drawRect:(struct CGRect)arg1;
- (void)scrollSelectionToVisible;
- (BOOL)scrollRectToVisible:(struct CGRect)arg1;
- (struct _NSRange)initialSelectionRangeForCell:(id)arg1 proposedRange:(struct _NSRange)arg2;
- (struct CGRect)frameOfOutlineCellAtRow:(long long)arg1;
- (struct CGRect)frameOfCellAtColumn:(long long)arg1 row:(long long)arg2;
- (double)_indentationForRow:(long long)arg1 withLevel:(long long)arg2 isSourceListGroupRow:(BOOL)arg3;
- (BOOL)groupWithRangeShouldDrawLeftDivider:(struct _NSRange)arg1;
- (struct _NSRange)rowRangeForEnclosingGroupOfItem:(id)arg1;
- (struct _NSRange)rowRangeForEnclosingGroupOfTreeNode:(id)arg1;
- (id)enclosingGroupItemForItem:(id)arg1;
- (id)enclosingGroupInfoForRow:(long long)arg1;
- (void)selectRowIndexes:(id)arg1 byExtendingSelection:(BOOL)arg2;
- (BOOL)_hasExpandedGroups;
- (void)_setNeedsDisplayInSelectedRows;
- (void)accessibilitySetSelectedRowsAttribute:(id)arg1;
- (void)keyUp:(id)arg1;
- (void)keyDown:(id)arg1;
- (void)mouseDown:(id)arg1;
- (void)quickLookWithEvent:(id)arg1;
- (void)setSortDescriptors:(id)arg1;
@property(copy) NSArray *rootItems;
- (void)_updateRootItems:(id)arg1 sortDescriptors:(id)arg2;
- (BOOL)isRootItem:(id)arg1;
- (id)realDelegate;
@property(readonly) id realDataSource;
- (void)setDelegate:(id)arg1;
- (void)setDataSource:(id)arg1;
- (id)_cachedHeightOfItemOrNil:(id)arg1;
- (double)_cachedOrEstimatedOrDefaultHeightOfItem:(id)arg1;
- (void)viewDidEndLiveResize;
- (BOOL)_isVariableRowHeightViewBasedOutlineView;
- (void)reloadData;
- (void)reloadItem:(id)arg1 reloadChildren:(BOOL)arg2;
- (void)_restoreEntriesToVisibleRect;
- (void)_rememberEntriesToRestoreToVisibleRect;
- (void)item:(id)arg1 expandedAddingRows:(long long)arg2;
- (void)registerGroupHeaderItem:(id)arg1 atRow:(unsigned long long)arg2;
- (void)printGroupInfo;
- (void)_clearGroupingInfo;
- (id)itemBeingFullyReloaded;
@property(readonly, getter=isReloadingItems) BOOL reloadingItems;
- (BOOL)sendAction:(SEL)arg1 to:(id)arg2;
- (void)_setSecondaryHighlight:(BOOL)arg1 forNavigableItem:(id)arg2;
- (void)_updateSecondaryHighlightForViewBasedOutlineView:(id)arg1 newItems:(id)arg2;
- (void)_refreshDisplayForItem:(id)arg1;
- (void)updateBoundExpandedItems;
- (void)updateBoundSelectedObjects;
- (void)publishBoundSelectedObjects;
- (void)_updateBoundContentArrayOrSet;
- (void)updateBoundContentSet;
- (void)updateBoundContentArray;
- (void)_refreshBoundExpandedAndSelectedItems:(id)arg1;
- (void)refreshBoundSelectedObjects;
- (void)refreshBoundExpandedItems;
- (id)dvtExtraBindings;
- (void)primitiveInvalidate;
- (void)suspendEditingWhilePerformingBlock:(CDUnknownBlockType)arg1;
- (id)_suspendEditing:(long long *)arg1;
- (void)didRemoveRowView:(id)arg1 forRow:(long long)arg2;
- (void)didAddRowView:(id)arg1 forRow:(long long)arg2;
- (unsigned long long)_outlineTableColumnIndex;
- (void)_recalculateAndCacheHeightForRowView:(id)arg1 row:(long long)arg2;
- (void)noteAllRowHeightsMayHaveChanged;
- (void)noteHeightOfRowsWithIndexesChanged:(id)arg1;
- (void)setShouldSuspendPublishBoundSelectedObjects:(BOOL)arg1;
- (BOOL)shouldSuspendPublishBoundSelectedObjects;
- (void)concludeBatchRowUpdates;
- (void)beginBatchRowUpdates;
- (void)setShouldSuspendRowHeightInvalidation:(BOOL)arg1;
- (BOOL)shouldSuspendRowHeightInvalidation;
- (void)collapseItem:(id)arg1;
- (void)collapseItem:(id)arg1 collapseChildren:(BOOL)arg2;
- (void)expandItemIncludingAncestors:(id)arg1 expandChildren:(BOOL)arg2;
- (void)expandItem:(id)arg1;
- (void)expandItem:(id)arg1 expandChildren:(BOOL)arg2;
- (void)expandAncestorsForItem:(id)arg1;
- (void)_expandAncestorsForItem:(id)arg1;
- (void)setFilteringEnabled:(BOOL)arg1;
- (BOOL)filteringEnabled;
- (BOOL)filteringActive;
- (id)emptyContentString;
- (void)_updateCachedRowHeightsForVisibleRows;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_ide_commonInit;

// Remaining properties
@property(retain) DVTStackBacktrace *creationBacktrace;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) DVTStackBacktrace *invalidationBacktrace;
@property(readonly) Class superclass;
@property(readonly, nonatomic, getter=isValid) BOOL valid;

@end
