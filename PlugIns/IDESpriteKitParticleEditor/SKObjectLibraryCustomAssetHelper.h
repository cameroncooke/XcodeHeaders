//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@class NSImage, NSString;

@interface SKObjectLibraryCustomAssetHelper : NSObject <NSCoding>
{
    id _skObject;
    NSString *_title;
    NSString *_subtitle;
    NSString *_summary;
    NSImage *_image;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)objectLibraryAssetWithUID:(id)arg1;

@end

