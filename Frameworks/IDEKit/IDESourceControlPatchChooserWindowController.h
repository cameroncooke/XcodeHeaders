//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSWindowController.h"

#import "NSSharingServicePickerDelegate.h"
#import "NSTableViewDataSource.h"
#import "NSTableViewDelegate.h"
#import "NSTextFieldDelegate.h"

@class DVTBorderedView, DVTGradientImageButton, DVTTableView, IDEControlGroup, IDEWorkspace, NSArray, NSArrayController, NSProgressIndicator, NSSearchField, NSString, NSTextField, NSWindow;

@interface IDESourceControlPatchChooserWindowController : NSWindowController <NSTableViewDataSource, NSTableViewDelegate, NSSharingServicePickerDelegate, NSTextFieldDelegate>
{
    NSProgressIndicator *_progressIndicator;
    NSTextField *_progressField;
    id <DVTInvalidation> _token;
    id _filterObservingToken;
    NSWindow *_parentWindow;
    NSArrayController *_arrayController;
    NSSearchField *_filterField;
    DVTBorderedView *_borderedView;
    IDEControlGroup *_controlGroup;
    DVTGradientImageButton *_shareButton;
    DVTGradientImageButton *_removeButton;
    DVTGradientImageButton *_addButton;
    BOOL _inProgress;
    DVTTableView *tableView;
    IDEWorkspace *_workspace;
    NSArray *_patches;
    CDUnknownBlockType _continuationBlock;
}

+ (id)keyPathsForValuesAffectingShouldEnableShareButton;
+ (id)keyPathsForValuesAffectingShouldEnableApplyButton;
@property BOOL inProgress; // @synthesize inProgress=_inProgress;
@property(copy) CDUnknownBlockType continuationBlock; // @synthesize continuationBlock=_continuationBlock;
@property(retain) NSArray *patches; // @synthesize patches=_patches;
@property __weak IDEWorkspace *workspace; // @synthesize workspace=_workspace;
@property DVTTableView *tableView; // @synthesize tableView;
- (void).cxx_destruct;
- (void)remove:(id)arg1;
- (void)add:(id)arg1;
- (void)cancel:(id)arg1;
- (void)cancelSheet;
- (void)sheetDidEnd:(id)arg1 returnCode:(long long)arg2 contextInfo:(void *)arg3;
- (BOOL)shouldEnableShareButton;
- (id)sharingServicePicker:(id)arg1 sharingServicesForItems:(id)arg2 proposedSharingServices:(id)arg3;
- (id)_radarSharingService:(id)arg1;
- (void)share:(id)arg1;
- (id)selectedPatch;
- (void)choose:(id)arg1;
- (void)beginSheetForWindow:(id)arg1;
- (id)tableView:(id)arg1 objectValueForTableColumn:(id)arg2 row:(long long)arg3;
- (id)tableView:(id)arg1 dataCellForTableColumn:(id)arg2 row:(long long)arg3;
- (void)loadWindow;
- (BOOL)shouldEnableApplyButton;
- (id)windowNibName;
- (void)textDidChange:(id)arg1;
- (void)windowDidLoad;
- (id)initWithWindow:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

