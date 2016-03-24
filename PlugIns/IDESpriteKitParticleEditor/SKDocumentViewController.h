//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "IDEViewController.h"

#import "DVTFindBarFindable.h"

@class NSArray, SKDocument, SKDocumentEditor, SKView;

@interface SKDocumentViewController : IDEViewController <DVTFindBarFindable>
{
    BOOL _oldIsScenePaused;
    SKDocumentEditor *_editor;
}

@property(nonatomic) __weak SKDocumentEditor *editor; // @synthesize editor=_editor;
- (void).cxx_destruct;
- (id)startingLocationForFindBar:(id)arg1 findingBackwards:(BOOL)arg2;
- (void)windowChangedOcclusionState:(id)arg1;
- (void)takeFocus;
- (void)selectDocumentLocations:(id)arg1;
@property(readonly, nonatomic) SKView *skView;
@property(readonly) __weak SKDocument *document;
@property(retain, nonatomic) NSArray *currentSelectedItems;
- (void)viewDidInstall;
- (void)invalidate;

@end
