//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IDEKit/IDEKeyDrivenNavigableItem.h>

@class NSError, NSMutableArray;

@interface IDESourceControlBranchesNavigableItem : IDEKeyDrivenNavigableItem
{
    NSMutableArray *_computedChildItems;
    NSError *_error;
}

- (void).cxx_destruct;
- (void)primitiveInvalidate;
- (void)_childBranchesWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)childRepresentedObjects;
- (void)idesc_setChildRepresentedObjects:(id)arg1;
- (BOOL)isLeaf;

@end

