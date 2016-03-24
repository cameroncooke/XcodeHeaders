//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <GPUTraceDebuggerUI/GPUSharedUIState.h>

@class DVTObservingToken, GPUDebuggingAdditionUIController, GPUInferiorSession, GPUInvestigatorReportItem, GPUTraceDocumentLocation, GPUTraceSession, IDEWorkspaceTabController, NSMutableDictionary, NSMutableSet, NSSet;

@interface GPUSharedTabUIState : GPUSharedUIState
{
    IDEWorkspaceTabController *_workspaceTabController;
    NSMutableDictionary *_displayedResourceForEditorIdentifierDict;
    id <DVTCancellable> _uiControllerToken;
    DVTObservingToken *_workspaceControllerToken;
    BOOL _loadingNewResources;
    BOOL _displayWireframe;
    int _tabUIMode;
    GPUTraceSession *_currentTraceSession;
    GPUInvestigatorReportItem *_currentReport;
    GPUTraceDocumentLocation *_currentMainEditorLocation;
    GPUTraceDocumentLocation *_currentMainEditorProgramLocation;
    GPUDebuggingAdditionUIController *_debuggingAdditionUIController;
    NSMutableSet *_expandedReportItems;
    NSMutableSet *_expandedProgramPerformanceItems;
    NSMutableSet *_collapsedReportItems;
}

@property(retain, nonatomic) NSMutableSet *collapsedReportItems; // @synthesize collapsedReportItems=_collapsedReportItems;
@property(retain, nonatomic) NSMutableSet *expandedProgramPerformanceItems; // @synthesize expandedProgramPerformanceItems=_expandedProgramPerformanceItems;
@property(retain, nonatomic) NSMutableSet *expandedReportItems; // @synthesize expandedReportItems=_expandedReportItems;
@property(retain, nonatomic) GPUDebuggingAdditionUIController *debuggingAdditionUIController; // @synthesize debuggingAdditionUIController=_debuggingAdditionUIController;
@property(nonatomic) int tabUIMode; // @synthesize tabUIMode=_tabUIMode;
@property(nonatomic) BOOL displayWireframe; // @synthesize displayWireframe=_displayWireframe;
@property(readonly, nonatomic) BOOL loadingNewResources; // @synthesize loadingNewResources=_loadingNewResources;
@property(retain, nonatomic) GPUTraceDocumentLocation *currentMainEditorProgramLocation; // @synthesize currentMainEditorProgramLocation=_currentMainEditorProgramLocation;
@property(retain, nonatomic) GPUTraceDocumentLocation *currentMainEditorLocation; // @synthesize currentMainEditorLocation=_currentMainEditorLocation;
@property(nonatomic) __weak GPUInvestigatorReportItem *currentReport; // @synthesize currentReport=_currentReport;
@property(readonly, nonatomic) __weak GPUTraceSession *currentTraceSession; // @synthesize currentTraceSession=_currentTraceSession;
- (void).cxx_destruct;
- (BOOL)tabUIModeIsADebuggerMode;
- (void)_unarchiveState;
- (void)_archiveState;
- (void)setNewTraceSession:(id)arg1;
@property(readonly, nonatomic) GPUInferiorSession *inferiorSession;
@property(readonly, nonatomic) BOOL currentLocationIsDisplayableItem; // @dynamic currentLocationIsDisplayableItem;
- (void)redrawDebugBar;
- (void)setNewMainEditorLocation:(id)arg1;
- (void)_setNewMainEditorLocation:(id)arg1;
- (void)setNewMainEditorProgramLocation:(id)arg1;
- (void)_setNewMainEditorProgramLocation:(id)arg1;
- (id)currentMainEditorProgramItem;
- (id)currentMainEditorItem;
- (void)removeResourceItemForIdentifier:(id)arg1;
- (void)addCurrentResourceItem:(id)arg1 forIdentifier:(id)arg2;
- (BOOL)_existingItemEquals:(id)arg1 forIdentifier:(id)arg2;
@property(readonly, nonatomic) NSSet *currentlyDisplayedResourceItems; // @dynamic currentlyDisplayedResourceItems;
- (BOOL)canExportDocument;
- (void)primitiveInvalidate;
- (void)updateDebuggingAdditionUIController;
- (id)initWithWorkspaceTabController:(id)arg1;

@end

