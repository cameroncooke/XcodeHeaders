//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import <IBFoundation/IBICSlotComponent.h>

#import "NSCopying.h"

@interface IBICSize : IBICSlotComponent <NSCopying>
{
    struct CGSize _pointSize;
}

+ (id)itemWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 pointSize:(struct CGSize)arg4 displayOrder:(double)arg5;
+ (id)contentsJSONKey;
@property(readonly) struct CGSize pointSize; // @synthesize pointSize=_pointSize;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqualToSlotComponent:(id)arg1;
- (BOOL)isEqualToSize:(id)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 pointSize:(struct CGSize)arg4 displayOrder:(double)arg5;

@end
