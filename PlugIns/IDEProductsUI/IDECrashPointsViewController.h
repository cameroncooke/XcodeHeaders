//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEProductSectionViewController.h"

#import "DVTReplacementViewDelegate.h"
#import "DVTSplitViewDelegate.h"

@class DVTObservingToken, DVTReplacementView, DVTSplitView, IDECrashPointDetailViewController, IDECrashPointOpenInProjectSheetController, IDECrashPointSourceListViewController, IDELaunchSession, IDEProductsEmptyContentViewController, NSString;

@interface IDECrashPointsViewController : IDEProductSectionViewController <DVTSplitViewDelegate, DVTReplacementViewDelegate>
{
    DVTSplitView *_splitView;
    IDECrashPointSourceListViewController *_sourceListViewController;
    IDECrashPointOpenInProjectSheetController *_openInProjectController;
    DVTReplacementView *_replacementView;
    DVTObservingToken *_crashPointObserver;
    DVTObservingToken *_crashLogObserver;
    DVTObservingToken *_crashPointSourceObserver;
    DVTObservingToken *_appStoreProductSourceObserver;
    DVTObservingToken *_appStoreCrashPointSourceObserver;
    IDELaunchSession *_currentLaunchSession;
}

+ (BOOL)canShowContentForProduct:(id)arg1;
+ (id)keyPathsForValuesAffectingEmptyContentViewController;
+ (id)keyPathsForValuesAffectingDetailViewController;
+ (id)keyPathsForValuesAffectingBusy;
+ (void)initialize;
@property(retain) IDELaunchSession *currentLaunchSession; // @synthesize currentLaunchSession=_currentLaunchSession;
@property(retain) DVTObservingToken *appStoreCrashPointSourceObserver; // @synthesize appStoreCrashPointSourceObserver=_appStoreCrashPointSourceObserver;
@property(retain) DVTObservingToken *appStoreProductSourceObserver; // @synthesize appStoreProductSourceObserver=_appStoreProductSourceObserver;
@property(retain) DVTObservingToken *crashPointSourceObserver; // @synthesize crashPointSourceObserver=_crashPointSourceObserver;
@property(retain) DVTObservingToken *crashLogObserver; // @synthesize crashLogObserver=_crashLogObserver;
@property(retain) DVTObservingToken *crashPointObserver; // @synthesize crashPointObserver=_crashPointObserver;
@property(retain) DVTReplacementView *replacementView; // @synthesize replacementView=_replacementView;
@property(retain) IDECrashPointOpenInProjectSheetController *openInProjectController; // @synthesize openInProjectController=_openInProjectController;
@property(retain) IDECrashPointSourceListViewController *sourceListViewController; // @synthesize sourceListViewController=_sourceListViewController;
@property __weak DVTSplitView *splitView; // @synthesize splitView=_splitView;
- (void).cxx_destruct;
- (void)_saveSourceListSplitPosition;
- (void)_restoreSourceListSplitPosition;
- (void)replacementView:(id)arg1 didInstallViewController:(id)arg2;
- (void)splitView:(id)arg1 resizeSubviewsWithOldSize:(struct CGSize)arg2;
- (void)_adjustCrashPointAreaSplitViewWithOldSize:(struct CGSize)arg1;
- (BOOL)splitView:(id)arg1 canCollapseSubview:(id)arg2;
- (double)splitView:(id)arg1 constrainMaxCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (double)splitView:(id)arg1 constrainMinCoordinate:(double)arg2 ofSubviewAt:(long long)arg3;
- (BOOL)shouldShowNoSelection;
- (void)handleAction:(id)arg1 fromInspectable:(id)arg2;
- (void)refresh;
- (void)_openProjectAtURL:(id)arg1 withCrashPoint:(id)arg2 logIndex:(unsigned long long)arg3 initialStackFrame:(id)arg4 productVersion:(id)arg5;
- (void)_showOpenInProjectSheetWithCallback:(CDUnknownBlockType)arg1;
- (void)_openCurrentCrashPointInProjectWithInitialStackFrame:(id)arg1;
- (void)_openCurrentCrashPointInProject;
- (void)showSymbolInDebugNavigator:(id)arg1;
- (void)showAccountPreferences:(id)arg1;
- (void)_updateDetailView;
- (id)_emptyViewContextualMenu;
- (void)_updateCurrentInspectable;
- (void)_updateDetailViewVisibility;
- (BOOL)_shouldShowDetailView;
- (void)_updateSourceListVisibility;
- (BOOL)empty;
@property(readonly) IDEProductsEmptyContentViewController *emptyContentViewController;
@property(readonly) IDECrashPointDetailViewController *detailViewController;
- (id)busyReason;
- (BOOL)busy;
- (void)viewDidLoad;
- (void)loadView;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
