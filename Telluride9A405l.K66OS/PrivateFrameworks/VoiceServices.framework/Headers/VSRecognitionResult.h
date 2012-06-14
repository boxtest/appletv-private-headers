/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/VoiceServices.framework/VoiceServices
 */

#import <NSObject.h> // Unknown library


@interface VSRecognitionResult : NSObject {
}
@property(retain) id recognitionAction;	// G=0x342d000d; S=0x342d0005; converted property
+ (void)initialize;	// 0x342d002d
+ (id)recognitionResultWithModelIdentifier:(id)modelIdentifier classIdentifiers:(id)identifiers values:(id)values;	// 0x342d0059
- (id)init;	// 0x342cfc55
- (id)createHandler;	// 0x342cfee9
- (id)description;	// 0x342d0011
- (int)elementCount;	// 0x342cfeb9
- (BOOL)getElementClassIdentifier:(id *)identifier value:(id *)value atIndex:(int)index;	// 0x342cfebd
- (unsigned)hash;	// 0x342cfc6d
- (BOOL)isEqual:(id)equal;	// 0x342cfc59
- (id)modelIdentifier;	// 0x342cfeb5
// converted property getter: - (id)recognitionAction;	// 0x342d000d
- (id)recognitionResultByReplacingValueForClassIdentifier:(id)classIdentifier withValue:(id)value;	// 0x342cfc89
- (oneway void)release;	// 0x342cfc81
- (id)retain;	// 0x342cfc71
- (unsigned)retainCount;	// 0x342cfc85
// converted property setter: - (void)setRecognitionAction:(id)action;	// 0x342d0005
- (id)valueOfFirstElementWithClassIdentifier:(id)classIdentifier;	// 0x342cfe35
@end
