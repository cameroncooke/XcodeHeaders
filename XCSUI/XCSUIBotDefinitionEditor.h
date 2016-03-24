//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEViewController.h"

#import "DVTTabChooserViewDelegate.h"

@class DVTBorderedView, DVTChoice, DVTReplacementView, DVTTabChooserView, IDEWorkspaceTabController, NSString, XCSBot, XCSUIBotDefinitionContext, XCSUIBotDefinitionEditor_BasicInfoCapsule, XCSUIBotDefinitionEditor_BuildConfigurationCapsule, XCSUIBotDefinitionEditor_DevicePickerCapsule, XCSUIBotDefinitionEditor_EnvironmentCapsule, XCSUIBotDefinitionEditor_NotificationsCapsule, XCSUIBotDefinitionEditor_SCMCapsule, XCSUIBotDefinitionEditor_ScheduleCapsule;

@interface XCSUIBotDefinitionEditor : IDEViewController <DVTTabChooserViewDelegate>
{
    XCSUIBotDefinitionEditor_BasicInfoCapsule *_basicInfoViewController;
    XCSUIBotDefinitionEditor_SCMCapsule *_scmCapsule;
    XCSUIBotDefinitionEditor_ScheduleCapsule *_scheduleViewController;
    XCSUIBotDefinitionEditor_BuildConfigurationCapsule *_buildConfigurationCapsule;
    XCSUIBotDefinitionEditor_DevicePickerCapsule *_devicePickerCapsule;
    XCSUIBotDefinitionEditor_EnvironmentCapsule *_environmentCapsule;
    XCSUIBotDefinitionEditor_NotificationsCapsule *_notificationsCapsule;
    IDEWorkspaceTabController *_workspaceTabController;
    DVTChoice *_basicInfoChoice;
    DVTChoice *_buildConfigurationChoice;
    DVTChoice *_devicePickerChoice;
    DVTChoice *_repositoriesChoice;
    DVTChoice *_notificationsChoice;
    DVTChoice *_environmentChoice;
    BOOL _disableWorkspaceSpecificSettings;
    XCSUIBotDefinitionContext *_definitionContext;
    XCSBot *_bot;
    DVTTabChooserView *_tabChooserView;
    DVTBorderedView *_borderedView;
    DVTReplacementView *_detailReplacementView;
    DVTBorderedView *_detailBorderedView;
}

@property __weak DVTBorderedView *detailBorderedView; // @synthesize detailBorderedView=_detailBorderedView;
@property __weak DVTReplacementView *detailReplacementView; // @synthesize detailReplacementView=_detailReplacementView;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property __weak DVTTabChooserView *tabChooserView; // @synthesize tabChooserView=_tabChooserView;
@property(nonatomic) BOOL disableWorkspaceSpecificSettings; // @synthesize disableWorkspaceSpecificSettings=_disableWorkspaceSpecificSettings;
@property(retain, nonatomic) XCSBot *bot; // @synthesize bot=_bot;
@property(retain, nonatomic) XCSUIBotDefinitionContext *definitionContext; // @synthesize definitionContext=_definitionContext;
- (void).cxx_destruct;
- (void)selectPane:(long long)arg1;
- (void)tabChooserView:(id)arg1 userDidChooseChoice:(id)arg2;
@property(readonly, nonatomic) id <XCSUIBotDefintionEditorViewController> installedViewController;
- (void)commitChanges;
- (void)loadViewForChoice:(id)arg1;
- (void)configureContext;
@property(retain, nonatomic) IDEWorkspaceTabController *workspaceTabController;
- (void)primitiveInvalidate;
- (void)unloadViews;
- (void)loadView;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

