/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSStream.h> // Unknown library


@interface NSStream (NSSocketStreamCreationExtensions)
+ (void)getStreamsToHost:(id)host port:(int)port inputStream:(id *)stream outputStream:(id *)stream4;	// 0x32499b9d
@end

@interface NSStream (NSStream)
@property(assign) id delegate;	// G=0x32499251; S=0x32499231; converted property
- (void)close;	// 0x32499275
// converted property getter: - (id)delegate;	// 0x32499251
- (void)open;	// 0x32499295
- (id)propertyForKey:(id)key;	// 0x3249920d
- (void)removeFromRunLoop:(id)runLoop forMode:(id)mode;	// 0x324991a9
- (void)scheduleInRunLoop:(id)runLoop forMode:(id)mode;	// 0x324991c9
// converted property setter: - (void)setDelegate:(id)delegate;	// 0x32499231
- (BOOL)setProperty:(id)property forKey:(id)key;	// 0x324991e9
- (id)streamError;	// 0x32499161
- (unsigned)streamStatus;	// 0x32499185
@end
