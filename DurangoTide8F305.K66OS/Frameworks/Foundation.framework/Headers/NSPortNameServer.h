/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import <NSObject.h> // Unknown library


@interface NSPortNameServer : NSObject {
}
+ (id)defaultPortNameServer;	// 0x327ed4b9
+ (id)systemDefaultPortNameServer;	// 0x327ed4d9
- (id)portForName:(id)name;	// 0x327ed31d
- (id)portForName:(id)name host:(id)host;	// 0x327ed2f9
- (id)portForName:(id)name onHost:(id)host;	// 0x327ed48d
- (BOOL)registerPort:(id)port forName:(id)name;	// 0x327ed4a1
- (BOOL)registerPort:(id)port name:(id)name;	// 0x327ed2d5
- (BOOL)removePortForName:(id)name;	// 0x327ed2b1
@end
