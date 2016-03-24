//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDENavigator.h>

@class IDENavigatorOutlineView, NSArray, NSMutableArray;

@interface IDEOutlineBasedNavigator : IDENavigator
{
    NSArray *_selectedObjects;
    IDENavigatorOutlineView *_outlineView;
    id <IDEOpenRequest> _lastOpenRequest;
}

+ (id)keyPathsForValuesAffectingFilterProgress;
+ (id)keyPathsForValuesAffectingObjects;
+ (void)initialize;
@property(retain) id <IDEOpenRequest> lastOpenRequest; // @synthesize lastOpenRequest=_lastOpenRequest;
@property(retain) IDENavigatorOutlineView *outlineView; // @synthesize outlineView=_outlineView;
- (void).cxx_destruct;
- (long long)filterProgress;
- (id)contextMenuSelection;
- (void)willForgetNavigableItems:(id)arg1;
- (void)primitiveInvalidate;
- (void)viewWillUninstall;
- (void)viewDidInstall;
@property(readonly, nonatomic) NSArray *objects;
- (void)_openNavigableItem:(id)arg1 eventType:(unsigned long long)arg2;
- (void)openDoubleClickedNavigableItemsAction:(id)arg1;
- (void)openClickedNavigableItemAction:(id)arg1;
- (void)openSelectedNavigableItemsKeyAction:(id)arg1;
- (id)openSpecifierForNavigableItem:(id)arg1 error:(id *)arg2;
- (BOOL)shouldOpenNavigableItem:(id)arg1 eventType:(unsigned long long)arg2;
- (BOOL)delegateFirstResponder;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;

// Remaining properties
@property(readonly) NSMutableArray *mutableSelectedObjects; // @dynamic mutableSelectedObjects;
@property(retain) NSArray *selectedObjects; // @dynamic selectedObjects;

@end
