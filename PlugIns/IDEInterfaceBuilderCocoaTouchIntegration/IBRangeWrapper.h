//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "NSCoding.h"

@interface IBRangeWrapper : NSObject <NSCoding>
{
    unsigned long long location;
    unsigned long long length;
}

+ (id)rangeWrapperWithRange:(struct _NSRange)arg1;
- (id)description;
- (struct _NSRange)rangeValue;
- (id)replacementObjectForPortCoder:(id)arg1;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)locationIsNSNotFound;
- (id)initWithLocation:(unsigned long long)arg1 length:(unsigned long long)arg2;

@end

