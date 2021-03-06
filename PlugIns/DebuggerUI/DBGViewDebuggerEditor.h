//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEEditor.h"

#import "DBGSceneViewControllerDelegate.h"
#import "IDEFocusedHierarchy.h"

@class DBGSceneViewController, DBGViewDebuggerAdditionUIController, DBGViewDebuggerDocument, DBGViewSurface, DBGViewWindow, DVTBorderedView, DVTDelayedInvocation, DVTGradientImageButton, DVTGradientImagePopUpButton, DVTObservingToken, DVTRangeSliderCell, NSArray, NSProgressIndicator, NSSegmentedControl, NSSet, NSSlider, NSString, NSView;

@interface DBGViewDebuggerEditor : IDEEditor <DBGSceneViewControllerDelegate, IDEFocusedHierarchy>
{
    NSArray *_currentSelectedItems;
    DBGViewWindow *_selectedWindow;
    DBGViewDebuggerAdditionUIController *_viewDebuggerUIController;
    DVTDelayedInvocation *_handleOutputSelectionChangeInvocation;
    DVTObservingToken *_showOnlyInterestingViewObjectsObservingToken;
    DVTObservingToken *_showOnlyVisibleViewObjectsObservingToken;
    DVTObservingToken *_navigatorOutputSelectionObserver;
    DVTObservingToken *_constraintsEnabledObservingToken;
    DVTObservingToken *_isIn3DObservingToken;
    DVTObservingToken *_nodeContentModeObservingToken;
    DVTObservingToken *_numberOfZPlanesObservingToken;
    DVTObservingToken *_rangeSliderLeftObservingToken;
    DVTObservingToken *_rangeSliderRightObservingToken;
    id <DVTCancellable> _viewDebuggerAdditionUIControllerObservingToken;
    DBGViewSurface *_formerlyFocusedObject;
    double _formerCameraZoom;
    BOOL _reachedStage2;
    NSSet *_selectedConstraintSet;
    DBGSceneViewController *_sceneViewController;
    DVTBorderedView *_backgroundView;
    DVTBorderedView *_toolBarView;
    NSSegmentedControl *_zoomSegmentedControl;
    DVTGradientImagePopUpButton *_nodeContentModePopupButton;
    DVTGradientImageButton *_toggle2D3DButton;
    NSSlider *_zDistanceSlider;
    DVTGradientImageButton *_constraintsButton;
    NSSlider *_viewRangeSlider;
    DVTRangeSliderCell *_viewRangeSliderCell;
    DVTGradientImageButton *_showClippedContentButton;
    NSView *_percentLoadedView;
    NSProgressIndicator *_percentLoadedIndicator;
    long long _selectedZoom;
}

+ (long long)version;
+ (void)configureStateSavingObjectPersistenceByName:(id)arg1;
+ (id)defaultViewNibBundle;
+ (id)defaultViewNibName;
@property BOOL reachedStage2; // @synthesize reachedStage2=_reachedStage2;
@property long long selectedZoom; // @synthesize selectedZoom=_selectedZoom;
@property __weak NSProgressIndicator *percentLoadedIndicator; // @synthesize percentLoadedIndicator=_percentLoadedIndicator;
@property(retain) NSView *percentLoadedView; // @synthesize percentLoadedView=_percentLoadedView;
@property __weak DVTGradientImageButton *showClippedContentButton; // @synthesize showClippedContentButton=_showClippedContentButton;
@property __weak DVTRangeSliderCell *viewRangeSliderCell; // @synthesize viewRangeSliderCell=_viewRangeSliderCell;
@property __weak NSSlider *viewRangeSlider; // @synthesize viewRangeSlider=_viewRangeSlider;
@property __weak DVTGradientImageButton *constraintsButton; // @synthesize constraintsButton=_constraintsButton;
@property __weak NSSlider *zDistanceSlider; // @synthesize zDistanceSlider=_zDistanceSlider;
@property __weak DVTGradientImageButton *toggle2D3DButton; // @synthesize toggle2D3DButton=_toggle2D3DButton;
@property __weak DVTGradientImagePopUpButton *nodeContentModePopupButton; // @synthesize nodeContentModePopupButton=_nodeContentModePopupButton;
@property __weak NSSegmentedControl *zoomSegmentedControl; // @synthesize zoomSegmentedControl=_zoomSegmentedControl;
@property __weak DVTBorderedView *toolBarView; // @synthesize toolBarView=_toolBarView;
@property __weak DVTBorderedView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(retain) DBGSceneViewController *sceneViewController; // @synthesize sceneViewController=_sceneViewController;
@property(retain) NSSet *selectedConstraintSet; // @synthesize selectedConstraintSet=_selectedConstraintSet;
- (void).cxx_destruct;
- (void)commitStateToDictionary:(id)arg1;
- (void)revertStateWithDictionary:(id)arg1;
- (void)primitiveInvalidate;
- (BOOL)focusHidesObject:(id)arg1;
- (BOOL)_isSurface:(id)arg1 ancestorOf:(id)arg2;
- (void)_breakOutOfFocusIfNecessary:(id)arg1;
- (id)_windowForViewObject:(id)arg1;
- (void)_showContextualJumpMenu;
@property(readonly) DBGViewDebuggerDocument *viewDebuggerDocument;
- (void)reloadSelectionInEditor;
- (void)addViewObjectsToSelectedItems:(id)arg1;
- (void)mouseClickedViewObject:(id)arg1 withEvent:(id)arg2;
- (void)zoomOutCanvas:(id)arg1;
- (void)zoomActualCanvas:(id)arg1;
- (void)zoomInCanvas:(id)arg1;
- (void)toggleClippingOfContent:(id)arg1;
- (void)toggleShowConstraints:(id)arg1;
- (void)gestureRecognizerAction:(id)arg1;
- (void)zoomButtonPressed:(id)arg1;
- (void)toggle2D3DButtonPressed:(id)arg1;
- (void)zoomButtonPressedForTag:(unsigned long long)arg1;
- (void)zDistanceSliderChanged:(id)arg1;
- (void)_reloadSceneViewController;
@property(retain) DBGViewWindow *selectedWindow;
@property(retain) NSArray *currentSelectedItems;
- (void)_setCurrentSelectedItemsFromDocumentLocations:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (id)_documentLocationsFromCurrentSelectedItems;
- (void)selectDocumentLocations:(id)arg1;
- (void)_handleNavigatorOutputSelectionChanged;
- (void)viewWillUninstall;
- (void)_cancelAndClearObservingTokens;
- (void)viewDidInstall;
- (void)_handleViewDebuggerPercentLoadedChanged;
- (void)_configureNodeContentModePopUp;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

