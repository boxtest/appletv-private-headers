/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/SAObjects.framework/SAObjects
 */

#import "AceObject.h"
#import "SAAceSerializable.h"

@class NSArray;

@interface SASRecognition : AceObject <SAAceSerializable> {
}
@property(copy, nonatomic) NSArray *phrases;	// G=0x326bdd11; S=0x326bdd79; 
+ (id)recognition;	// 0x326bdc81
+ (id)recognitionWithDictionary:(id)dictionary context:(id)context;	// 0x326bdcc5
- (id)encodedClassName;	// 0x326bdc75
- (id)groupIdentifier;	// 0x326bdc65
// declared property getter: - (id)phrases;	// 0x326bdd11
// declared property setter: - (void)setPhrases:(id)phrases;	// 0x326bdd79
@end

