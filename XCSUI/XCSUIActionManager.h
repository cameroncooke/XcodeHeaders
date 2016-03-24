//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDEContinuousIntegrationActionManager.h"

@class DVTObservingToken, NSString, XCSUIBotDefinitionEditorWindowController;

@interface XCSUIActionManager : NSObject <IDEContinuousIntegrationActionManager>
{
    CDUnknownBlockType _serviceMatchingNameCompletionBlock;
    DVTObservingToken *_serviceMatchingObserver;
    XCSUIBotDefinitionEditorWindowController *_definitionEditorWindowController;
}

+ (BOOL)canUserViewBotsOnService:(id)arg1;
@property(retain) XCSUIBotDefinitionEditorWindowController *definitionEditorWindowController; // @synthesize definitionEditorWindowController=_definitionEditorWindowController;
- (void).cxx_destruct;
- (void)_handleCommitAndIntegrateOptionsWithBotDefinitionContext:(id)arg1 window:(id)arg2;
- (void)hostedRepositoriesOnService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)canCreateHostedRepositoriesOnService:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)createHostedRepositoryWithName:(id)arg1 onService:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)webURLForIntegration:(id)arg1;
- (id)webURLForBot:(id)arg1;
- (BOOL)canUserDuplicateBot:(id)arg1;
- (BOOL)canUserCreateAndDeleteBotsOnServiceForBotOrIntegration:(id)arg1;
- (BOOL)canUserCreateBotsOnAnyService;
- (id)projectNameInBlueprintForBot:(id)arg1;
- (void)fetchBotForBotId:(id)arg1 onService:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)serviceMatchingHostName:(id)arg1 withTimeout:(double)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)fetchIntegrationForId:(id)arg1 onService:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)deleteIntegration:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)cancelIntegration:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)deleteBot:(id)arg1 workspace:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)integrateBot:(id)arg1 cleanFirst:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)integrationsForBot:(id)arg1 max:(unsigned long long)arg2 sortNewestFirst:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)integrationsForBot:(id)arg1 inRange:(struct _NSRange)arg2 sortNewestFirst:(BOOL)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)showBotEditorForWorkspaceTabController:(id)arg1 bot:(id)arg2 editingMode:(long long)arg3 completionBlock:(CDUnknownBlockType)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

