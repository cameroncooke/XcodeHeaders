//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IBViewEditor.h"

#import "IBUIViewControllerEditorViewDelegate.h"

@class DVTNotificationToken, DVTObservingToken, IBUIToolbarEditingPolicy, IBUIViewControllerEditorView, NSString;

@interface IBUIViewControllerEditor : IBViewEditor <IBUIViewControllerEditorViewDelegate>
{
    IBUIViewControllerEditorView *_viewControllerEditorView;
    IBUIToolbarEditingPolicy *_possiblyStaleToolbarEditingPolicy;
    DVTNotificationToken *_didAddObjectObservingToken;
    DVTNotificationToken *_frameChangeToken;
    DVTObservingToken *_targetRuntimeObservation;
    DVTObservingToken *_inheritedMetricsObservation;
    DVTObservingToken *_didChangeDefaultMetricsObservation;
    IBUIViewControllerEditor *_rootViewControllerEditor;
}

+ (Class)ibDropTargetResolverClass;
@property(readonly) IBUIViewControllerEditor *rootViewControllerEditor; // @synthesize rootViewControllerEditor=_rootViewControllerEditor;
- (void).cxx_destruct;
- (id)draggedImageState:(id)arg1;
- (id)initialDragImageState:(id)arg1;
- (BOOL)interceptEvent:(id)arg1;
- (void)sizeSelectionToFit:(id)arg1;
- (BOOL)canSizeSelectionToFit;
- (void)reattachDraggedObjects:(id)arg1 dragContext:(id)arg2;
- (void)failToAcceptDragInfo:(id)arg1;
- (id)acceptDragInfo:(id)arg1 context:(id)arg2;
- (void)prepareToAcceptDragInfo:(id)arg1;
- (BOOL)wantsDefaultDragInsertionIndicatorForDragInfo:(id)arg1;
- (id)buildHighlightMaskForObject:(id)arg1;
- (void)performCut:(id)arg1;
- (void)performDelete:(id)arg1;
- (void)performPaste:(id)arg1;
- (void)didDeactivate;
- (void)willClose;
- (void)didOpen;
- (BOOL)shouldDragFrameWithMouseDownInEditedRect:(id)arg1;
- (id)viewForTrackingObject:(id)arg1;
- (id)containedBarButtonItemForObject:(id)arg1;
- (void)resizeChild:(id)arg1 fromKnob:(CDUnion_aed8a530)arg2 withEvent:(id)arg3;
- (id)viewForClippingToWhenDrawingSelectionKnobsForObject:(id)arg1;
- (BOOL)areKnobsLockedForObject:(id)arg1;
- (BOOL)shouldChildHaveResizeKnobs:(id)arg1;
- (CDStruct_b58c4854)activeKnobRectsForObject:(id)arg1;
- (id)trackerForChild:(id)arg1 withView:(id)arg2 fromKnob:(CDUnion_aed8a530)arg3;
- (id)viewToTrackForFrameResizing;
- (id)editedView;
- (void)noteDescendant:(id)arg1 didChangeProperty:(id)arg2 fromValue:(id)arg3;
- (void)contentViewDidResize:(id)arg1;
- (id)bottomBarViewForEditorView:(id)arg1 withSimulatedBarMetrics:(id)arg2;
- (id)topBarViewForEditorView:(id)arg1 withSimulatedBarMetrics:(id)arg2;
- (id)editorView:(id)arg1 selectedItemForSimulatedTabBar:(id)arg2;
- (id)editorView:(id)arg1 explanitoryTextForPlaceholderView:(id)arg2;
- (id)editorView:(id)arg1 subtitleForPlaceholderView:(id)arg2;
- (id)editorView:(id)arg1 titleForPlaceholderView:(id)arg2;
- (void)synchronizeWithEditedViewController;
- (id)contentViewDisplayingViewController;
- (id)toolbarEditingPolicy;
- (BOOL)editedViewControllerContainsBarButtonItem:(id)arg1;
- (id)displayedNavigationBar;
- (id)displayedToolbar;
- (id)displayedTabBar;
- (id)editedViewController;
- (id)placeholderView;
- (id)editorView;
- (id)editorViewForViewController:(id)arg1;
- (id)parentViewControllerEditor;
- (id)storyboardCanvasFrame;
- (id)storyboardCanvasViewController;
- (id)storyboardDocumentEditor;
- (id)initWithEditedObject:(id)arg1 parentEditor:(id)arg2 frameController:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

