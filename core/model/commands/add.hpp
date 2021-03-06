/*
Copyright Soramitsu Co., Ltd. 2016 All Rights Reserved.
http://soramitsu.co.jp

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
#ifndef CORE_DOMAIN_COMMANDS_ADD_HPP_
#define CORE_DOMAIN_COMMANDS_ADD_HPP_

#include <utility>
#include <repository/domain/account_repository.hpp>
#include <model/objects/account.hpp>
#include <model/objects/asset.hpp>
#include <util/logger.hpp>
namespace command {

template <typename T>
class Add: public T {
  public:

    template<typename... Args>
    constexpr Add(
        Args&&... args
    ):
        T(std::forward<Args>(args)...)
    {}

    constexpr auto getCommandName() const{
        return "Add";
    }

    void execution();

};

};  // namespace command

#endif  // CORE_DOMAIN_TRANSACTIONS_TRANSFERTRANSACTION_HPP_

