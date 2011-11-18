/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/CoreDAV.framework/CoreDAV
 */

#import <NSObject.h> // Unknown library
#import "CoreDAVResponseBodyParser.h"

@class NSError, NSMutableData;

@interface CoreDAVOctetStreamParser : NSObject <CoreDAVResponseBodyParser> {
	NSMutableData *_octetStreamData;	// 4 = 0x4
	NSError *_parserError;	// 8 = 0x8
}
@property(retain) NSMutableData *octetStreamData;	// G=0x30fff8a5; S=0x30fff8b9; @synthesize=_octetStreamData
@property(readonly, assign) NSError *parserError;	// G=0x30fff86d; 
- (id)init;	// 0x30fff73d
- (void)dealloc;	// 0x30fff7b1
- (id)description;	// 0x30fff811
// declared property getter: - (id)octetStreamData;	// 0x30fff8a5
// declared property getter: - (id)parserError;	// 0x30fff86d
- (BOOL)processData:(id)data forTask:(id)task;	// 0x30fff83d
// declared property setter: - (void)setOctetStreamData:(id)data;	// 0x30fff8b9
@end

