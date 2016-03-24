//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSURL;

@protocol iCloudItemProvider <NSObject>
- (void)childrenOfParent:(id <iCloudItem>)arg1 includeDeleted:(BOOL)arg2 completionBlock:(void (^)(NSArray *, NSError *))arg3;
- (void)removeItemFromCache:(id <iCloudItem>)arg1;
- (id <iCloudItem>)addItemToCache:(id <iCloudItem>)arg1;
- (id <iCloudItem>)cachedItemForLocalURL:(NSURL *)arg1 createIfNeeded:(BOOL)arg2;
- (id <iCloudItem>)rootItem;
- (BOOL)hasCachedItemForLocalURL:(NSURL *)arg1;
@end

