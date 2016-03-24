//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTTextCompletionStrategy.h"

@class DVTSourceCodeLanguage;

@interface IDETextCompletionSourceModelStrategy : DVTTextCompletionStrategy
{
    int _currentCompletionType;
    DVTSourceCodeLanguage *_objCLang;
}

+ (BOOL)shouldAutoCompleteClassForwardDeclarationAtLocation:(unsigned long long)arg1 inTextStorage:(id)arg2;
- (void).cxx_destruct;
- (id)completionItemsForDocumentLocation:(id)arg1 context:(id)arg2 highlyLikelyCompletionItems:(id *)arg3 areDefinitive:(char *)arg4;
- (id)_classCompletionItemsForDocumentLocation:(id)arg1 context:(id)arg2 areDefinitive:(char *)arg3;
- (void)prepareForDocumentLocation:(id)arg1 context:(id)arg2;

@end

