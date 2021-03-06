//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEEditor.h"

#import "DVTFindBarFindable.h"
#import "DVTReplacementViewDelegate.h"

@class DVTReplacementView, GTFFileSystemEventStream, NSArray, NSString, SKDocument, SKDocumentViewController;

@interface SKDocumentEditor : IDEEditor <DVTFindBarFindable, DVTReplacementViewDelegate>
{
    SKDocumentViewController *_documentViewController;
    GTFFileSystemEventStream *_eventStream;
    NSArray *_currentSelectedItems;
    DVTReplacementView *_documentReplacementView;
}

+ (BOOL)canProvideCurrentSelectedItems;
@property(retain) DVTReplacementView *documentReplacementView; // @synthesize documentReplacementView=_documentReplacementView;
@property(copy) NSArray *currentSelectedItems; // @synthesize currentSelectedItems=_currentSelectedItems;
@property(retain, nonatomic) SKDocumentViewController *documentViewController; // @synthesize documentViewController=_documentViewController;
- (void).cxx_destruct;
- (void)replacementView:(id)arg1 willCloseViewController:(id)arg2;
- (void)replacementView:(id)arg1 willInstallViewController:(id)arg2;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)dvtFindBar:(id)arg1 didUpdateResults:(id)arg2;
- (void)takeFocus;
- (void)selectDocumentLocations:(id)arg1;
- (id)currentSelectedDocumentLocations;
- (void)registerFSEvents;
@property(readonly) SKDocument *document;
- (void)viewWillUninstall;
- (void)viewDidInstall;
- (void)primitiveInvalidate;
- (void)loadView;
- (Class)convertSKTargetToEditorClass:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2 document:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

