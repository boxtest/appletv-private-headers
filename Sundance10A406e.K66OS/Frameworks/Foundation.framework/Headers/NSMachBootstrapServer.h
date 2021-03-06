/**
 * This header is generated by class-dump-z 0.2a.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/Frameworks/Foundation.framework/Foundation
 */

#import "NSPortNameServer.h"


@interface NSMachBootstrapServer : NSPortNameServer {
}
+ (id)sharedInstance;	// 0x355dd19d
- (id)portForName:(id)name;	// 0x355dd275
- (id)portForName:(id)name host:(id)host;	// 0x355dd421
- (id)portForName:(id)name options:(unsigned)options;	// 0x355dd1d9
- (BOOL)registerPort:(id)port name:(id)name;	// 0x355dd289
- (BOOL)removePortForName:(id)name;	// 0x355dd469
- (id)servicePortWithName:(id)name;	// 0x355dd335
@end

