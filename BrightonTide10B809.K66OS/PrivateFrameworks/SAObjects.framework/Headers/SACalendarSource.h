/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "SASource.h"


@interface SACalendarSource : SASource {
}
@property(assign, nonatomic) BOOL strict;	// G=0x353e829d; S=0x353e8315; 
+ (id)source;	// 0x353e820d
+ (id)sourceWithDictionary:(id)dictionary context:(id)context;	// 0x353e8251
- (id)encodedClassName;	// 0x353e8201
- (id)groupIdentifier;	// 0x353e81f1
// declared property setter: - (void)setStrict:(BOOL)strict;	// 0x353e8315
// declared property getter: - (BOOL)strict;	// 0x353e829d
- (void)updateUsingSet:(id)set add:(id)add remove:(id)remove;	// 0x353e8359
@end

