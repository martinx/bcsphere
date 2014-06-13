/*
 Copyright 2013-2014 JUMA Technology
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at
 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 */

#import <Foundation/Foundation.h>
#import <CoreBluetooth/CoreBluetooth.h>

@interface ManagerEntity : NSObject{
}
@property (strong, nonatomic) NSMutableArray *arrayWebView;
@property (strong, nonatomic) NSMutableArray *arrayDevice;
@property (strong, nonatomic) NSMutableArray *myAllPeripherals;
@property (strong, nonatomic) NSMutableArray *_peripherals;
@property (strong, nonatomic) NSMutableDictionary *RSSIdic;
@property (strong, nonatomic) NSMutableDictionary *advDataDic;
@property (strong, nonatomic) NSString *debugModual;
@end