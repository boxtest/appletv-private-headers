/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/IMFoundation.framework/IMFoundation
 */

#import <NSObject.h> // Unknown library

@class NSData, NSString, NSArray;

@interface IMXMLParserContext : NSObject {
	NSData *_inContentAsData;	// 4 = 0x4
}
@property(readonly, assign) NSData *inContentAsData;	// G=0x36ea3e59; @synthesize=_inContentAsData
@property(readonly, assign) NSString *name;	// G=0x36eb1a8d; 
@property(readonly, assign) NSArray *resultsForLogging;	// G=0x36eb1a99; 
- (id)initWithContent:(id)content;	// 0x36ea3af5
- (id)initWithContentAsData:(id)contentAsData;	// 0x36ea3b29
- (void)dealloc;	// 0x36ea4555
- (id)inContent;	// 0x36eb1a35
// declared property getter: - (id)inContentAsData;	// 0x36ea3e59
// declared property getter: - (id)name;	// 0x36eb1a8d
- (void)reset;	// 0x36ea3e55
// declared property getter: - (id)resultsForLogging;	// 0x36eb1a99
@end
