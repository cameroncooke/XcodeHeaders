//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEViewController.h>

#import "IDEBatchFindRuleEditorDelegate.h"
#import "IDEBatchFindScopeRuleRowDelegate.h"
#import "NSTableViewDelegate.h"

@class DVTStackView_ML, IDEBatchFindRuleEditor, IDEBatchFindScopeEditorDelegateProxy, IDEBatchFindScopePredicate, NSArray, NSArrayController, NSImageView, NSPredicate, NSString, NSTextField;

@interface IDEBatchFindScopeEditor : IDEViewController <IDEBatchFindScopeRuleRowDelegate, IDEBatchFindRuleEditorDelegate, NSTableViewDelegate>
{
    NSArrayController *searchPredicateController;
    id selectionObserverToken;
    DVTStackView_ML *contentView;
    IDEBatchFindRuleEditor *ruleEditor;
    NSArray *_topLevelRows;
    BOOL _dontRespondToEditorChange;
    BOOL _addingNewCompoundRow;
    NSTextField *_errorLabel;
    NSImageView *_errorImage;
    NSTextField *_nameField;
    IDEBatchFindScopeEditorDelegateProxy *_delegateProxy;
}

+ (id)fileTypeTitles;
+ (id)fileTypes;
@property(retain) IDEBatchFindScopeEditorDelegateProxy *delegateProxy; // @synthesize delegateProxy=_delegateProxy;
@property(retain) NSTextField *nameField; // @synthesize nameField=_nameField;
- (void).cxx_destruct;
- (void)setNameAction:(id)arg1;
- (void)ruleEditorRowsDidChange:(id)arg1;
- (void)sizeWindowToFit;
- (BOOL)_checkRules;
- (void)_updateErrorStatus:(id)arg1;
- (void)_commitChanges;
- (void)revertScope:(id)arg1 toPredicate:(id)arg2;
- (void)ruleRow:(id)arg1 changedDisplayValue:(id)arg2;
- (BOOL)ruleEditor:(id)arg1 shouldAddRowOfType:(unsigned long long)arg2;
- (id)ruleEditor:(id)arg1 displayValueForCriterion:(id)arg2 inRow:(long long)arg3;
- (id)ruleEditor:(id)arg1 child:(long long)arg2 forCriterion:(id)arg3 withRowType:(unsigned long long)arg4;
- (long long)ruleEditor:(id)arg1 numberOfChildrenForCriterion:(id)arg2 withRowType:(unsigned long long)arg3;
@property(retain) NSPredicate *currentPredicate;
- (id)_predicateForRow:(long long)arg1;
- (id)_compoundPredicateForRows:(id)arg1 forType:(unsigned long long)arg2;
- (id)_predicateForRowCriterion:(id)arg1;
- (id)_topLevelRows;
- (BOOL)isShowingPathControl;
- (void)deleteScope:(id)arg1;
- (id)addScope;
- (void)_deleteScope:(id)arg1;
- (void)_addScope:(id)arg1 atIndex:(long long)arg2;
@property(retain) IDEBatchFindScopePredicate *selectedScope;
@property(copy) NSArray *scopePredicates;
- (BOOL)checkRulesAndCommit;
- (void)loadView;
- (void)primitiveInvalidate;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

