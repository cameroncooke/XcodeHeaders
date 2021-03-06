//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCopying.h"

@class NSImage, NSString, NSURL;

@interface IDERecentDocumentInfo : NSObject <NSCopying>
{
    id <NSRecentDocumentInfo> _recentInfo;
    NSURL *_url;
}

+ (id)_descriptionForLastOpenedDate:(id)arg1 isLastOpenedDate:(BOOL)arg2 withPrefix:(BOOL)arg3;
+ (id)recentsForURLs:(id)arg1;
+ (id)recentsForRecentInfos:(id)arg1;
- (void).cxx_destruct;
@property(readonly) NSString *shortLastOpenedDate;
@property(readonly) NSString *lastOpenedDate;
- (id)_lastOpenedDateWithPrefix:(BOOL)arg1;
- (id)recentDocumentInfo;
- (long long)state;
@property(readonly) NSString *truncatedPath;
@property(readonly) NSString *name;
@property(readonly) NSImage *image;
@property(readonly) NSURL *url;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithRecentInfo:(id)arg1;

@end

