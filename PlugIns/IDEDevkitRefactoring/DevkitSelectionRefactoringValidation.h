//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "IDERefactoringSelectionValidation.h"

@interface DevkitSelectionRefactoringValidation : NSObject <IDERefactoringSelectionValidation>
{
}

+ (BOOL)isRefactoring:(id)arg1 allowedForSelectedSymbols:(id)arg2 error:(id *)arg3;
+ (BOOL)isRefactoring:(id)arg1 allowedForSourceExpression:(id)arg2 error:(id *)arg3;

@end

