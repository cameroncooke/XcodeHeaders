//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "DVTTextCompletionStrategy.h"

@class DVTTextDocumentLocation, IDEEditorDocument, NSDictionary;

@interface DBGIndexCompletionStrategy : DVTTextCompletionStrategy
{
    NSDictionary *_indexCompletionsRequestDictionary;
    DVTTextDocumentLocation *_locationInAdjustedText;
    BOOL _doSwiftCompletion;
    IDEEditorDocument *_swiftDocument;
    DVTTextCompletionStrategy *_swiftCompletionStrategy;
}

- (void).cxx_destruct;
- (id)completionItemsForDocumentLocation:(id)arg1 context:(id)arg2 highlyLikelyCompletionItems:(id *)arg3 areDefinitive:(char *)arg4;
- (void)prepareForDocumentLocation:(id)arg1 context:(id)arg2;

@end

