/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

#import <NSObject.h> // Unknown library

@class OCDSummary;
@protocol OCDReader, OCDWriter;

__attribute__((visibility("hidden")))
@interface OCDDocument : NSObject {
@private
	id<OCDReader> mReader;	// 4 = 0x4
	id<OCDWriter> mWriter;	// 8 = 0x8
	OCDSummary *mSummary;	// 12 = 0xc
}
@property(retain) id reader;	// G=0x32d3de29; S=0x32bcc231; converted property
@property(retain) id writer;	// G=0x32d3de39; S=0x32d3de49; converted property
- (id)init;	// 0x32bc93bd
- (void)dealloc;	// 0x32b1430d
- (bool)isFromBinaryFile;	// 0x32d3dea5
- (bool)isToBinaryFile;	// 0x32d3de85
// converted property getter: - (id)reader;	// 0x32d3de29
// converted property setter: - (void)setReader:(id)reader;	// 0x32bcc231
// converted property setter: - (void)setWriter:(id)writer;	// 0x32d3de49
- (id)summary;	// 0x32b1033d
// converted property getter: - (id)writer;	// 0x32d3de39
@end

