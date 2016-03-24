//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEViewController.h"

@class DVTBorderedView, DVTTableView, NSArray, NSMutableArray, NSPopUpButton, NSTextField, XCSDeviceSpecification, XCSUIBotDefinitionContext;

@interface XCSUIBotDefinition_DevicePickerEditor : IDEViewController
{
    XCSUIBotDefinitionContext *_botDefinitionContext;
    NSMutableArray *_groupedDevices;
    NSTextField *_testWithLabel;
    NSPopUpButton *_platformsButton;
    NSPopUpButton *_filterTypesButton;
    NSPopUpButton *_architectureTypesButton;
    DVTBorderedView *_borderedView;
    DVTTableView *_tableView;
    NSTextField *_platformsErrorLabel;
}

@property __weak NSTextField *platformsErrorLabel; // @synthesize platformsErrorLabel=_platformsErrorLabel;
@property __weak DVTTableView *tableView; // @synthesize tableView=_tableView;
@property __weak DVTBorderedView *borderedView; // @synthesize borderedView=_borderedView;
@property __weak NSPopUpButton *architectureTypesButton; // @synthesize architectureTypesButton=_architectureTypesButton;
@property __weak NSPopUpButton *filterTypesButton; // @synthesize filterTypesButton=_filterTypesButton;
@property __weak NSPopUpButton *platformsButton; // @synthesize platformsButton=_platformsButton;
@property __weak NSTextField *testWithLabel; // @synthesize testWithLabel=_testWithLabel;
@property(retain, nonatomic) NSMutableArray *groupedDevices; // @synthesize groupedDevices=_groupedDevices;
@property(retain, nonatomic) XCSUIBotDefinitionContext *botDefinitionContext; // @synthesize botDefinitionContext=_botDefinitionContext;
- (void).cxx_destruct;
- (BOOL)tableView:(id)arg1 isGroupRow:(long long)arg2;
- (id)tableView:(id)arg1 viewForTableColumn:(id)arg2 row:(long long)arg3;
- (long long)numberOfRowsInTableView:(id)arg1;
- (void)groupDevices;
- (id)platformForIdentifier:(id)arg1;
- (void)selectOrDeselectDevice:(id)arg1;
- (void)chooseArchitectureType:(id)arg1;
- (void)chooseFilterType:(id)arg1;
- (void)choosePlatform:(id)arg1;
- (void)updateArchitecturesMenu;
- (void)updateFiltersMenu;
- (void)syncFromModelToView;
- (void)updateAvailableDevices;
- (void)updatePlatformsMenu;
- (void)listenForDeviceChanges;
@property(readonly) NSArray *selectedDevices;
@property(readonly) NSArray *compatibleDevices;
@property(readonly) NSArray *selectablePlatforms;
@property(readonly) NSArray *availableDevices;
@property(readonly) NSArray *availablePlatforms;
- (id)filter;
@property(retain, nonatomic) XCSDeviceSpecification *deviceSpecification;
- (id)service;
- (void)commitChanges;
- (void)viewWillUninstall;
- (void)viewDidInstall;

@end

