//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEViewController.h"

#import "DVTProductManagerDelegate.h"
#import "DVTReplacementViewDelegate.h"
#import "DVTSplitViewDelegate.h"
#import "NSTableViewDelegate.h"

@class DVTBorderedView, DVTGradientImageButton, DVTNotificationToken, DVTObservingToken, DVTProduct, DVTProductManager, DVTReplacementView, DVTScrollView, DVTSplitView, DVTTableView, IDEProductSectionViewController, IDEProductsUtilityViewController, NSArray, NSArrayController, NSIndexSet, NSMutableDictionary, NSString, NSView;

@interface IDEProductsViewController : IDEViewController <NSTableViewDelegate, DVTSplitViewDelegate, DVTProductManagerDelegate, DVTReplacementViewDelegate>
{
    BOOL _programmaticallyManipulatingProductsSourceListSplitPosition;
    BOOL _restoringSelectedSegmentIndex;
    BOOL _displayedLogInErrors;
    NSArray *_productSectionSegments;
    long long _selectedSegmentIndex;
    DVTSplitView *_splitView;
    DVTScrollView *_scrollView;
    DVTReplacementView *_replacementView;
    NSArrayController *_productsArrayController;
    DVTTableView *_productsTable;
    DVTGradientImageButton *_refreshButton;
    NSView *_sourceListContainer;
    DVTBorderedView *_borderedContentView;
    NSIndexSet *_productsTableSelectionIndexes;
    NSArray *_productsForDisplay;
    DVTProduct *_selectedProduct;
    NSArray *_sortedProductSectionExtensions;
    NSArray *_products;
    IDEProductsUtilityViewController *_utilityViewController;
    IDEProductSectionViewController *_currentSectionViewController;
    NSMutableDictionary *_sourcesToErrorsMap;
    DVTObservingToken *_productsObserver;
    DVTObservingToken *_productsForDisplayObserver;
    DVTObservingToken *_inspectableObserver;
    DVTObservingToken *_selectedProductObserver;
    DVTObservingToken *_busyObserver;
    DVTObservingToken *_currentSectionEmptyObserver;
    DVTNotificationToken *_splitViewResizeObserver;
}

+ (id)keyPathsForValuesAffectingBusyReason;
+ (id)keyPathsForValuesAffectingBusy;
+ (void)initialize;
@property(retain) DVTNotificationToken *splitViewResizeObserver; // @synthesize splitViewResizeObserver=_splitViewResizeObserver;
@property(retain) DVTObservingToken *currentSectionEmptyObserver; // @synthesize currentSectionEmptyObserver=_currentSectionEmptyObserver;
@property(retain) DVTObservingToken *busyObserver; // @synthesize busyObserver=_busyObserver;
@property(retain) DVTObservingToken *selectedProductObserver; // @synthesize selectedProductObserver=_selectedProductObserver;
@property(retain) DVTObservingToken *inspectableObserver; // @synthesize inspectableObserver=_inspectableObserver;
@property(retain) DVTObservingToken *productsForDisplayObserver; // @synthesize productsForDisplayObserver=_productsForDisplayObserver;
@property(retain) DVTObservingToken *productsObserver; // @synthesize productsObserver=_productsObserver;
@property(nonatomic, getter=hasDisplayedLogInErrors) BOOL displayedLogInErrors; // @synthesize displayedLogInErrors=_displayedLogInErrors;
@property(nonatomic, getter=isRestoringSelectedSegmentIndex) BOOL restoringSelectedSegmentIndex; // @synthesize restoringSelectedSegmentIndex=_restoringSelectedSegmentIndex;
@property(nonatomic, getter=isProgrammaticallyManipulatingProductsSourceListSplitPosition) BOOL programmaticallyManipulatingProductsSourceListSplitPosition; // @synthesize programmaticallyManipulatingProductsSourceListSplitPosition=_programmaticallyManipulatingProductsSourceListSplitPosition;
@property(retain) NSMutableDictionary *sourcesToErrorsMap; // @synthesize sourcesToErrorsMap=_sourcesToErrorsMap;
@property(retain) IDEProductSectionViewController *currentSectionViewController; // @synthesize currentSectionViewController=_currentSectionViewController;
@property(retain) IDEProductsUtilityViewController *utilityViewController; // @synthesize utilityViewController=_utilityViewController;
@property(retain) NSArray *products; // @synthesize products=_products;
@property(retain, nonatomic) NSArray *sortedProductSectionExtensions; // @synthesize sortedProductSectionExtensions=_sortedProductSectionExtensions;
@property(retain) DVTProduct *selectedProduct; // @synthesize selectedProduct=_selectedProduct;
@property(retain) NSArray *productsForDisplay; // @synthesize productsForDisplay=_productsForDisplay;
@property(retain, nonatomic) NSIndexSet *productsTableSelectionIndexes; // @synthesize productsTableSelectionIndexes=_productsTableSelectionIndexes;
@property __weak DVTBorderedView *borderedContentView; // @synthesize borderedContentView=_borderedContentView;
@property __weak NSView *sourceListContainer; // @synthesize sourceListContainer=_sourceListContainer;
@property __weak DVTGradientImageButton *refreshButton; // @synthesize refreshButton=_refreshButton;
@property __weak DVTTableView *productsTable; // @synthesize productsTable=_productsTable;
@property __weak NSArrayController *productsArrayController; // @synthesize productsArrayController=_productsArrayController;
@property __weak DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property __weak DVTScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property __weak DVTSplitView *splitView; // @synthesize splitView=_splitView;
@property(nonatomic) long long selectedSegmentIndex; // @synthesize selectedSegmentIndex=_selectedSegmentIndex;
- (void).cxx_destruct;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)productManager:(id)arg1 receivedErrors:(id)arg2 fromSource:(id)arg3;
- (void)splitViewDidResizeSubviewsNotification:(id)arg1;
- (struct CGRect)splitView:(id)arg1 effectiveRect:(struct CGRect)arg2 forDrawnRect:(struct CGRect)arg3 ofDividerAtIndex:(long long)arg4;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (void)primitiveInvalidate;
@property(readonly) NSArray *productSectionSegments; // @synthesize productSectionSegments=_productSectionSegments;
- (id)sortedExtensionsWithDefinitionIdentifier:(id)arg1;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (double)tableView:(id)arg1 heightOfRow:(long long)arg2;
- (BOOL)_tableView:(id)arg1 isGroupRow:(long long)arg2;
- (BOOL)tableView:(id)arg1 shouldSelectRow:(long long)arg2;
- (void)_saveSelectedProductState;
- (void)_restoreSelectedProductState;
- (void)_saveSelectedSegmentIndexState;
- (void)_restoreSelectedSegmentIndexState;
- (unsigned long long)_defaultSelectedSegment;
- (void)_saveSourceListSplitPosition;
- (void)_restoreSourceListSplitPosition;
- (void)_restoreSourceListScrollPosition;
- (void)showProductError:(id)arg1;
- (void)_showLogInErrorsOnce;
- (void)refresh:(id)arg1;
@property(readonly, nonatomic) NSString *busyReason;
@property(readonly, nonatomic) BOOL busy;
- (void)_resumeSplitPositions;
- (void)_resetDefaultUtilitiesSplitPosition;
- (id)errorsFromProductSource:(id)arg1;
- (void)_toggleUtiltitiesVisibility;
- (BOOL)shouldShowUtilities;
- (void)_toggleSourceListVisibility;
- (BOOL)shouldShowSourceList;
- (void)_updateProductsTableIssueDisplay;
- (id)showProductsSectionWithIdentifier:(id)arg1 forProductIdentifier:(id)arg2;
- (unsigned long long)indexForProductSectionDefinitionIdentifier:(id)arg1;
- (id)indexSetForProductIdentifier:(id)arg1;
- (id)selectedProductFromSelectedIndex:(id)arg1;
@property(readonly) DVTProductManager *productManager;
- (void)_updateDetailView;
- (void)updateProductsDisplay;
- (void)updateProducts;
- (void)_startObservations;
- (void)viewWillAppear;
- (void)viewDidLoad;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
