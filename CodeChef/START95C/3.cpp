#include <bits/stdc++.h>
using namespace std;

#define ll long long

void solve()
{
    ll number_of_cars, number_of_outlets, number_of_hours;
    cin >> number_of_cars >> number_of_outlets >> number_of_hours;

    vector<ll> energy_capacity(number_of_cars);
    vector<ll> outlet_power(number_of_outlets);

    for (ll i = 0; i < number_of_cars; i++)
    {
        cin >> energy_capacity[i];
    }

    for (ll i = 0; i < number_of_outlets; i++)
    {
        cin >> outlet_power[i];
    }

    sort(energy_capacity.rbegin(), energy_capacity.rend());
    sort(outlet_power.rbegin(), outlet_power.rend());

    ll total_energy = 0;
    ll outlet_index = 0;

    for (ll i = 0; i < number_of_cars; i++)
    {
        if (outlet_index >= number_of_outlets)
        {
            break;
        }

        ll energy = min(outlet_power[outlet_index]*number_of_hours, energy_capacity[i]) ;
        total_energy += energy;
        outlet_index++;
    }

    cout << total_energy << endl;
}

int main()
{
    ll T;
    cin >> T;

    while (T--)
    {
        solve();
    }

    return 0;
}
